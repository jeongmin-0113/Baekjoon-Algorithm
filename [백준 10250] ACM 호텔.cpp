#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t; cin >> t;

	while (t--) {
		int h, w, n;
		cin >> h >> w >> n;

		int x, y;
		y = n % h;
		x = n / h + 1;
		if (y == 0) { y = h;  x = n / h; }

		int ans = y * 100 + x;
		cout << ans << '\n';
	}
	
	return 0;
}