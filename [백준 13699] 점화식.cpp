/*#include <iostream>
using namespace std;

long long dp[36];
long long func(int k) {
	if (k == 0 || k == 1) return 1;
	if (dp[k] != -1) return dp[k];
	long long ret = 0;
	for (int i = 0; i < k; ++i) {
		ret += func(i) * func(k - i - 1);
	}
	dp[k] = ret;
	return dp[k];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	fill(dp, dp + n + 1, -1);
	cout << func(n) << '\n';

	return 0;
}*/