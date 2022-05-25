#include <iostream>
#include <vector>
using namespace std;

vector <int> adj[101];
int visited[101];
int ans;

void dfs(int cur) {
	visited[cur] = 1;
	ans++;
	for (auto& next : adj[cur]) {
		if (!visited[next]) dfs(next);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int com, connect;
	cin >> com >> connect;
	for (int i = 0; i < connect; ++i) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1);
	cout << ans-1 << '\n';

	return 0;
}