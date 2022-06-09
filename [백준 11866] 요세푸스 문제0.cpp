#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k; cin >> n >> k;
	deque <int> dp;
	queue <int> ans;
	for (int i = 1; i <= n; ++i) dp.push_back(i);

	while (!dp.empty()) {
		for (int i = 0; i < k-1; ++i) {
			int tmp = dp.front();
			dp.pop_front();
			dp.push_back(tmp);
		}
		ans.push(dp.front());
		dp.pop_front();
	}

	cout << '<';
	for (int i = 0; i < n; ++i) {
		if (i == n-1) {
			cout << ans.front();
		}
		else cout << ans.front() << ", ";
		ans.pop();
	}
	cout << '>';

	return 0;
}