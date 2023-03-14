#include <iostream>
#include <vector>
using namespace std;

int parent[100001];
bool visited[100001];
vector <int> links[100001];

void rooting(int cur) {
	visited[cur] = 1;
	for (int i = 0; i < links[cur].size(); i++) {
		int next = links[cur][i];
		if (!visited[next]) {
			parent[next] = cur;
			rooting(next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	fill_n(parent, 100001, 123456);
	parent[1] = -1; // 1번 노드는 root

	int N; cin >> N;

	int cnt = N - 1;
	while (cnt--) {
		int a, b; cin >> a >> b;
		links[a].push_back(b);
		links[b].push_back(a);
	}

	rooting(1);
	for (int i = 2; i <= N; ++i) cout << parent[i] << '\n';
}