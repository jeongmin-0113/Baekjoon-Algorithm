#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int n; cin >> n;
	while (n--) {
		int tmp; cin >> tmp;
		if (tmp == 0) {
			if (pq.empty()) cout << 0 << '\n';
			else {
				cout << pq.top().second << '\n';
				pq.pop();
			}
		}
		else if (tmp < 0) pq.push(make_pair(abs(tmp), tmp));
		else pq.push(make_pair(tmp, tmp));
	}

	return 0;
}