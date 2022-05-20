#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	stack <int> s;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		if (tmp == 0) {
			s.pop();
		}
		else {
			s.push(tmp);
		}
	}

	int ans = 0;
	while (s.size()) {
		ans += s.top();
		s.pop();
	}
	cout << ans << '\n';

	return 0;
}