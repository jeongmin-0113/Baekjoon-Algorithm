#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map <string, int> m;
		for (int i = 0; i < n; ++i) {
			string a, b; cin >> a >> b;
			if (m.find(b) == m.end()) m.insert({ b,1 });
			else m[b]++;
		}

		int ans = 1;
		for (auto i : m) {
			ans *= i.second + 1;
		}
		ans--;
		cout << ans << '\n';
	}

	return 0;
}