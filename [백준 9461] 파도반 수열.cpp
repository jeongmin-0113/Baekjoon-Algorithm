#include <iostream>
using namespace std;

long long dp[101];
long long func(int k) {
	if (k == 1 || k == 2 || k == 3) return 1;
	if (dp[k] != -1) return dp[k];
	return dp[k] = func(k - 2) + func(k - 3);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	fill(dp, dp + 101, -1);
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		cout << func(tmp) << '\n';
	}

	return 0;
}