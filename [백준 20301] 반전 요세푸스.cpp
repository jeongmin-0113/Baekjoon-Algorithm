#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k, m;
	int cnt = 0;
	int reverse = 0;
	deque <int> dq;
	cin >> n >> k >> m;
	for (int i = 0; i < n; ++i) dq.push_back(i+1);

	while (n--) {
		if (cnt == m) {
			cnt = 0;
			reverse = 1 - reverse;
		}
		if (!reverse) {
			for (int i = 0; i < k - 1; ++i) {
				int a = dq.front();
				dq.pop_front();
				dq.push_back(a);
			}
			cout << dq.front() << '\n';
			dq.pop_front();
			cnt++;
		}
		else {
			for (int i = 0; i < k - 1; ++i) {
				int a = dq.back();
				dq.pop_back();
				dq.push_front(a);
			}
			cout << dq.back() << '\n';
			dq.pop_back();
			cnt++;
		}
	}

	return 0;
}