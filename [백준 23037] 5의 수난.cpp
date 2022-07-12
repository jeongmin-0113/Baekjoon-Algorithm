#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int ans = 0;
	int n; cin >> n;

	for (int i = 0; i < 5; ++i) {
		int tmp = n % 10;
		n = n / 10;
		tmp = tmp * tmp * tmp * tmp * tmp;
		ans += tmp;
	}

	cout << ans << '\n';


	return 0;
}