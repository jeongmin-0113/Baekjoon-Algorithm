#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	while (n--) {
		int m; cin >> m;
		int avg = 0;
		int ans = 0;
		vector <int> v;

		for (int i = 0; i < m; ++i) {
			int tmp; cin >> tmp;
			v.push_back(tmp);
			avg += tmp;
		}
		avg = avg / m;
		sort(v.begin(), v.end());
		ans = m - (upper_bound(v.begin(), v.end(), avg) - v.begin());

		cout << fixed;
		cout.precision(3);
		cout << (double) ans / m * 100 << '%' << '\n';
	}
}