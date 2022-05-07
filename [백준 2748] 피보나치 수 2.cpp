#include <iostream>
using namespace std;

long long dp[91];
int n;
long long func(int i) {
	if (i == 0 || i == 1) return i;
	if (dp[i] != -1) return dp[i];
	return dp[i] = func(i - 1) + func(i - 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	fill(dp, dp + n + 1, -1);
	cout << func(n) << '\n';

	return 0;
}