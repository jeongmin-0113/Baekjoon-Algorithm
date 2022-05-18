#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	queue <int> s, ans;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) s.push(i);

	while (s.size() != 0) {
		for (int i = 0; i < k - 1; ++i) {
			int tmp = s.front();
			s.pop();
			s.push(tmp);
		}
		int ret = s.front();
		s.pop();
		ans.push(ret);
	}
	cout << '<';
	for (int i = 0; i < n; ++i) {
		int output = ans.front();
		ans.pop();
		cout << output;
		if (ans.empty()) { cout << '>' << '\n'; break; }
		cout << ", ";
	}

	return 0;
}