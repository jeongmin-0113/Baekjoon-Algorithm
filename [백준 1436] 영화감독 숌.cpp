#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int ans = 666;

	while (true) {
		string t = to_string(ans);
		if (t.find("666") != -1) {
			n--;
			if (n == 0) break;
		}

		ans++;
	}

	cout << ans << '\n';

	return 0;
}