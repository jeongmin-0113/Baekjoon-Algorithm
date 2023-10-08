#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int sum;
int req[10001];
int max_budget;

int func(int budget) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (req[i] > budget) sum += budget;
		else sum += req[i];
	}
	return sum;
}

void calc_budget(int start, int end) {
	int mid = (start + end) / 2;
	int budget = func(mid);

	if (start > end) return;
	if (budget <= m) {
		max_budget = mid;
		calc_budget(mid + 1, end);
	}
	else {
		calc_budget(start, mid - 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> req[i];
		sum += req[i];
	}
	cin >> m;

	sort(req, req + n);
	if (sum <= m) {
		cout << req[n - 1] << '\n';
		return 0;
	}

	calc_budget(1, req[n-1]);

	cout << max_budget << '\n';
}
