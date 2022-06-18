#include <iostream>
using namespace std;

int ans[100][100];
int main() {
	int n, m; cin >> n >> m;
	int cnt = 2;

	for (int j = 0; j < m; ++j) {
		for (int i = 0; i < n; ++i) {
			cin >> ans[i][j];
		}
	}

	for (int j = 0; j < m; ++j) {
		for (int i = 0; i < n; ++i) {
			int tmp; cin >> tmp;
			ans[i][j] += tmp;
		}
	}

	for (int j = 0; j < m; ++j) {
		for (int i = 0; i < n; ++i) {
			cout << ans[i][j] << ' ';
		}
	}
	return 0;
}