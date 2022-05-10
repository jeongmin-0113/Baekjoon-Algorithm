#include <iostream>
using namespace std;

int dp[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	dp[1] = 1; dp[2] = 2;
	if (n == 1 || n == 2) {
		cout << n << '\n';
		return 0;
	}

	for (int i = 3; i <= n; ++i) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[n] << '\n';

	return 0;
}