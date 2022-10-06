/*#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 1; i <= n; ++i) cin >> arr[i];

	dp[0] = 0;
	for (int i = 1; i <= n; ++i) {
		dp[i] = 1;
		for (int j = 0; j <= i; ++j) {
			if (arr[i] > arr[j] && dp[j] + 1 > dp[i]) dp[i] = dp[j] + 1;
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; ++i) ans = max(dp[i], ans);

	cout << ans << endl;
	return 0;
}*/