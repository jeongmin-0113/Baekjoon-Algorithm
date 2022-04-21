#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	vector <int> v;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	vector <int> sum(v.size());
	partial_sum(v.begin(), v.end(), sum.begin());

	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		int sub;
		if (a - 2 < 0) sub = 0;
		else sub = sum[a - 2];
		cout << sum[b - 1] - sub << '\n';
	}
	return 0;
}