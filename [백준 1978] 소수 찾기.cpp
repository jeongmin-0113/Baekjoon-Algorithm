/*#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		if (num > 2) {
			for (int j = 2; j < num; ++j) {
				if (num % j == 0) {
					break;
				}
				if (j == num - 1) ans++;
			}
		}
		else if (num == 2) {
			ans++;
		}
	}

	cout << ans << '\n';
	return 0;
}*/