#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> connect[101];
int visited[101];
int cnt[101];

void find_person(int cur, int target) {
	if (cur == target) return;
	if (!connect[cur].empty()) {
		for (int i = 0; i < connect[cur].size(); ++i) {
			int next = connect[cur][i];
			if (visited[next] != 1) {
				visited[next] = 1;
				cnt[next] = cnt[cur] + 1;
				find_person(next, target);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int a, b; cin >> a >> b;

	int m; cin >> m;
	while (m--) {
		int x, y; cin >> x >> y;
		connect[x].push_back(y);
		connect[y].push_back(x);
	}

	visited[a] = 1;
	find_person(a, b);

	if (visited[b] != 1) cout << -1 << '\n';
	else cout << cnt[b] << '\n';
}
