#include <iostream>
using namespace std;

int dp[46];
int n;

int func(int n) {
	if (n == 1 || n == 0) return n;
	if (dp[n] != -1) return dp[n];
	return dp[n] = func(n - 1) + func(n - 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	fill(dp, dp + n + 1, -1);
	cout << func(n) << '\n';
	

	return 0;
}