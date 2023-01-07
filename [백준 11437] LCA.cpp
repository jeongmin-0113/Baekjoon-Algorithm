#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[50001];
int visited[50001];
int parent[50001];
int depth[50001];

void makeTree(int prev, int cur) {
	visited[cur] = 1;

	if (cur != 1) {
		parent[cur] = prev;
		depth[cur] = depth[prev] + 1;
	}

	for (int i = 0; i < adj[cur].size(); ++i) {
		int next = adj[cur][i];
		if (visited[next] != 1) makeTree(cur, next);
	}
}

int LCA(int a, int b) {
	if (depth[a] != depth[b]) {
		if (depth[b] < depth[a]) swap(a, b);
		int dh = depth[b] - depth[a];
		while (dh) {
			b = parent[b];
			dh--;
		}
	}

	while (a != b) {
		a = parent[a];
		b = parent[b];
	}

	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	parent[1] = -1; // root
	depth[1] = 1;

	int n; cin >> n;
	for (int i = 0; i < n - 1; ++i) {
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	makeTree(1, 1);

	int m; cin >> m;
	for (int i = 0; i < m; ++i) {
		int a, b; cin >> a >> b;
		cout << LCA(a, b) << '\n';
	}
}