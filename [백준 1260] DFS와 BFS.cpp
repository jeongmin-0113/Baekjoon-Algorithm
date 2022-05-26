#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, v;
int visited1[1001];
int visited2[1001];
vector <int> connection[1001];
queue <int> q;
int dist[1001];

void dfs(int cur) {
	visited1[cur] = 1;
	cout << cur << ' ';
	for (int i = 0; i < connection[cur].size();++i) {
		int next = connection[cur][i];
		if (!visited1[next]) dfs(next);
	}
}

void bfs(int v) {
	q.push(v);
	visited2[v] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << ' ';
		for (int i = 0; i < connection[cur].size(); ++i) {
			int next = connection[cur][i];
			if (!visited2[next]) {
				visited2[next] = 1;
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> v;
	for (int i = 0; i < m; ++i) {
		int a, b; cin >> a >> b;
		connection[a].push_back(b);
		connection[b].push_back(a);
	}
	for (int i = 1; i <= n; ++i) {
		sort(connection[i].begin(), connection[i].end());
	}
	dfs(v);
	cout << '\n';
	bfs(v);

	return 0;
}