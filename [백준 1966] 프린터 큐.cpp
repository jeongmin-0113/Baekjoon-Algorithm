#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int c;
	cin >> c;

	for (int i = 0; i < c; ++i) {
		int n, m;
		queue <pair<int, int>> docu;
		priority_queue <int> p;
		cin >> n >> m;

		for (int j = 0; j < n; ++j) {
			int tmp;
			cin >> tmp;
			docu.push(pair<int, int>(tmp, j));
			p.push(tmp);
		}

		int ans = 0;
		while (!docu.empty()) {
			int value = docu.front().first;
			int index = docu.front().second;
			docu.pop();

			if (p.top() == value) {
				ans++;
				p.pop();
				if (index == m) break;
			}
			else {
				docu.push(pair<int, int>(value, index));
			}
		}

		cout << ans << '\n';
	}

	return 0;
}