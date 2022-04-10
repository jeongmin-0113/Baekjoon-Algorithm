#include <iostream>
using namespace std;

int numOfFive(const int n) {
	int tmp = n;
	int cnt = 0;
	while (true) {
		if (tmp % 5 != 0) break;
		else {
			cnt++;
			tmp = tmp / 5;
		}
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans += numOfFive(i);
	}
	cout << ans << '\n';
	return 0;
}