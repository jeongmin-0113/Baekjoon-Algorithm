#include <iostream>
#include <vector>
using namespace std;

int arr[301][301];
int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> arr[i][j];
		}
	}

	int k, ans = 0;
	cin >> k;
	while (k--) {
		int a, b, x, y;
		ans = 0;
		cin >> a >> b >> x >> y;
		for (int i = a; i <= x; ++i) {
			for (int j = b; j <= y; ++j) {
				ans += arr[i][j];
			}
		}
		cout << ans << '\n';
	}
}