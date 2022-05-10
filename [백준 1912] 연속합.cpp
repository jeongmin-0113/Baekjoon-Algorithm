#include <iostream>
using namespace std;

int dp[100001];
int num[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> num[i];
	}
	
	dp[0] = num[0];
	int ans = dp[0];
	for (int i = 1; i < n; ++i) {
		dp[i] = max(dp[i - 1] + num[i], num[i]);
		if (dp[i] > ans) ans = dp[i];
	}
	cout << ans << '\n';

	return 0;
}