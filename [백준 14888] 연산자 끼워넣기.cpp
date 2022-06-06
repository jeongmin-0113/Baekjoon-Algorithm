#include <iostream>
using namespace std;

int n;
int maxRes = -1000000001, minRes = 1000000001;
int arr[4];
int num[11];

void func(int ans, int idx) {
	if (idx == n) {
		maxRes = max(maxRes, ans);
		minRes = min(minRes, ans);
		return;
	}

	for (int i = 0; i < 4; ++i) {
		if (arr[i] > 0) {
			arr[i]--;
			if (i == 0) func(ans + num[idx], idx+1);
			else if (i == 1) func(ans - num[idx], idx+1);
			else if (i == 2) func(ans * num[idx], idx+1);
			else if (i == 3) func(ans / num[idx], idx+1);
			arr[i]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) { cin >> num[i]; }
	for (int i = 0; i < 4; ++i) cin >> arr[i];
	func(num[0], 1);

	cout << maxRes << '\n';
	cout << minRes << '\n';

	return 0;
}