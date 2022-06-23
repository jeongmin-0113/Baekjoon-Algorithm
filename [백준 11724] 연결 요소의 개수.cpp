#include <iostream>
#include <vector>
using namespace std;

vector <int> point[1001];
int visited[1001];
int cnt = 0;
int n, m;

void dfs(int n) {
	visited[n] = 1;
	for (int i = 0; i < point[n].size(); ++i) {
		int idx = point[n][i];
		if (!visited[idx]) dfs(idx);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int a, b; cin >> a >> b;
		point[a].push_back(b);
		point[b].push_back(a);
	}

	for (int i = 1; i <= n; ++i) {
		if (!visited[i]) {
			cnt++;
			dfs(i);
		}
	}

	cout << cnt << '\n';

	return 0;
}