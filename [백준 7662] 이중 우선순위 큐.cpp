#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		multiset <int> ms;

		while (n--) {
			char c; cin >> c;
			if (c == 'I') {
				int tmp; cin >> tmp;
				ms.insert(tmp);
			}
			else if (c == 'D') {
				int tmp; cin >> tmp;

				if (ms.empty()) continue;
				else if (tmp == 1) {
					auto it = ms.end();
					it--;
					ms.erase(it);
				}
				else if (tmp == -1) {
					auto it = ms.begin();
					ms.erase(it);
				}
			}
		}

		if (ms.empty()) cout << "EMPTY" << '\n';
		else {
			auto it = ms.end();
			it--;
			cout << *it << ' ' << *ms.begin() << '\n';
		}
	}

	return 0;
}