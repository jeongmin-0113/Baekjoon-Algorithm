#include <iostream>
#include <cstring>
using namespace std;

int land[51][51];
int check[51][51];
int t, n, m, k;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
void dfs(int x, int y) {
	check[x][y] = 1;
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
			if (land[nx][ny]&&!check[nx][ny]) dfs(nx, ny);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		memset(land, 0, sizeof(land));
		memset(check, 0, sizeof(check));
		cin >> m >> n >> k;

		while (k--) {
			int x, y; cin >> x >> y;
			land[y][x] = 1;
		}

		int bug = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (land[i][j]&&!check[i][j]) {
					bug++;
					dfs(i, j);
				}
			}
		}
		cout << bug << '\n';
	}

	return 0;
}