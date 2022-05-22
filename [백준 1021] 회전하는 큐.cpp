#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	deque <int> d;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) d.push_back(i);

	int ans = 0;
	for (int i = 0; i < m; ++i) {
		int tmp; cin >> tmp;
		int idx = 0;

		for (idx = 0; idx < d.size(); ++idx) if (d[idx] == tmp) break;
		if (idx == 0) {
			d.pop_front();
		}
		else {
			if (idx <= d.size() / 2) {
				for (int j = 0; j < idx; ++j) {
					d.push_back(d.front());
					d.pop_front();
					ans++;
				}
				d.pop_front();
			}
			else {
				for (int j = idx; j < d.size(); ++j) {
					d.push_front(d.back());
					d.pop_back();
					ans++;
				}
				d.pop_front();
			}
		}
	}
	cout << ans << '\n';

	return 0;
}