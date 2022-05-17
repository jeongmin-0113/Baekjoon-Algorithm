#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[40][40];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int r, c, t;
	cin >> r >> c;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> arr[i][j];
		}
	}
	cin >> t;

	int ans = 0;
	for (int i = 0; i < r-2; ++i) {
		for (int j = 0; j < c-2; ++j) {
			int tmp;
			vector <int> v;
			for (int n = 0; n < 3; ++n) {
				for (int m = 0; m < 3; ++m) {
					v.push_back(arr[i + n][j + m]);
				}
			}
			sort(v.begin(), v.end());
			tmp = v[4];
			if (tmp >= t) ans++;
		}
	}
	cout << ans << '\n';

	return 0;
}