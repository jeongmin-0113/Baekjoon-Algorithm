#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n, m;
	cin >> n >> m;

	string s; cin >> s;

	long long ans = 0;
	for (long long i = 0; i < m; ++i) {
		long long length = 0;
		if (s[i] == 'O') continue;
		else {
			while (s[i + 1] == 'O' && s[i + 2] == 'I') {
				i += 2;
				length++;
				if (length == n) { ans++; length--; }
			}
			length = 0;
		}
	}

	cout << ans << '\n';
	return 0;
}