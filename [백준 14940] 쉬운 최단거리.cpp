#include <iostream>	
#include <string.h>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
int arr[1001][1001];
int ans[1001][1001];
int targetX, targetY;

// ╩С, го, аб, ©Л
int moveX[4] = { 0, 0, -1, 1 };
int moveY[4] = { -1, 1, 0, 0 };

queue<pair<int,int>> q;

void routing() {
	while (!q.empty()) {
		int curx = q.front().second;
		int cury = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextx = curx + moveX[i];
			int nexty = cury + moveY[i];

			if (nextx > 0 && nextx <= m && nexty > 0 && nexty <= n && arr[nexty][nextx] == 1) {
				if (ans[nexty][nextx] == -1) {
					ans[nexty][nextx] = ans[cury][curx] + 1;
					q.push({ nexty, nextx });
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// input
	memset(ans, -1, sizeof(ans));
	cin >> n >> m;
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= m; i++) {
			cin >> arr[j][i];
			if (arr[j][i] == 2) {
				// target
				targetX = i;
				targetY = j;
				ans[targetY][targetX] = 0;
				q.push({ targetY, targetX });
			}
			if (arr[j][i] == 0) {
				ans[j][i] = 0;
			}
		}
	}

	// process
	routing();

	// output
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= m; i++) {
			cout << ans[j][i] << ' ';
		}
		cout << '\n';
	}
}