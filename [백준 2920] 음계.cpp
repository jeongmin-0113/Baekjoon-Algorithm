#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tone[8];
	for (int i = 0; i < 8; ++i) cin >> tone[i];

	int ans;
	if (tone[0] == 1) {
		ans = 1;
		for (int i = 0; i < 8; ++i) {
			if (tone[i] == ans) ans++;
			else { ans = -1; break; }
		}
	}
	else if (tone[0] == 8) {
		ans = 8;
		for (int i = 0; i < 8; ++i) {
			if (tone[i] == ans) ans--;
			else { ans = -1; break; }
		}
	}
	else {
		ans = -1;
	}

	if (ans == 9) cout << "ascending" << '\n';
	else if (ans == 0) cout << "descending" << '\n';
	else cout << "mixed" << '\n';

	return 0;
}