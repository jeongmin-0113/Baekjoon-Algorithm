#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	deque <int> d;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		string tmp; cin >> tmp;
		if (tmp[0] == 'p') {
			// push_front / push_back / pop_front / pop_back
			if (tmp[1] == 'u') {
				// push~
				int m; cin >> m;
				if (tmp[5] == 'f') {
					d.push_front(m);
				}
				else {
					d.push_back(m);
				}
			}
			else {
				// pop~
				if (tmp[4] == 'f') {
					if (d.empty()) {
						cout << -1 << '\n';
					}
					else {
						cout << d.front() << '\n';
						d.pop_front();
					}
				}
				else {
					if (d.empty()) {
						cout << -1 << '\n';
					}
					else {
						cout << d.back() << '\n';
						d.pop_back();
					}
				}
			}
		}
		else if (tmp[0] == 's') {
			// size
			cout << d.size() << '\n';
		}
		else if (tmp[0] == 'e') {
			// empty
			cout << d.empty() << '\n';
		}
		else if (tmp[0] == 'f') {
			// front
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
			}
		}
		else if (tmp[0] == 'b') {
			// back
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
			}
		}
	}

	return 0;
}