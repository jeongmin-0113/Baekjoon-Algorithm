#include <iostream>
using namespace std;

int dp[1000001];
int func(int n) {
	if (n == 1) return 0;
	if (dp[n] != -1) return dp[n];

	int result = func(n - 1) + 1;
	if (n % 3 == 0) result = min(result, func(n / 3) + 1);
	if (n % 2 == 0) result = min(result, func(n / 2) + 1);
	return dp[n] = result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x;
	cin >> x;
	fill(dp, dp + x + 1, -1);
	cout << func(x) << '\n';

	return 0;
}