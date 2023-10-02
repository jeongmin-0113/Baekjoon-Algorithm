#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int arr[26][26];
int visited[26][26];

// 상 하 좌 우
int move_x[] = { -1,1,0,0 };
int move_y[] = { 0,0,-1,1 };

int cnt;
void dfs(int curx, int cury) {
	for (int i = 0; i < 4; ++i) {
		int nextx = curx + move_x[i];
		int nexty = cury + move_y[i];

		if (nextx >= 0 && nextx < N && nexty >= 0 && nexty < N) {
			if (arr[nextx][nexty] == 1 && visited[nextx][nexty] == 0) {
				visited[nextx][nexty] = 1;
				cnt++;
				dfs(nextx, nexty);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; ++i) {
		string tmp; cin >> tmp;
		for (int j = 0; j < tmp.size(); ++j) {
			if (tmp[j] == '1') arr[i][j] = 1;
		}
	}

	vector<int> groups;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (arr[i][j] == 1 && visited[i][j] == 0) {
				visited[i][j] = 1;
				cnt = 1;
				dfs(i, j);
				groups.push_back(cnt);
			}
		}
	}

	sort(groups.begin(), groups.end());
	cout << groups.size() << '\n';
	for (int i = 0; i < groups.size(); ++i) cout << groups[i] << '\n';
}
