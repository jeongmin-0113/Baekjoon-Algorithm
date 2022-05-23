#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	deque <pair<int, int>> d;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		int tmp; cin >> tmp;
		d.push_back(make_pair(i, tmp));
	}

	while (true) {
		pair <int, int> k = d.front();
		cout << k.first << " ";
		d.pop_front();
		if (d.empty()) break;
		if (k.second > 0) {
			for (int i = 0; i < k.second-1; ++i) {
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else {
			for (int i = k.second; i < 0; ++i) {
				d.push_front(d.back());
				d.pop_back();
			}
		}
	}

	return 0;
}