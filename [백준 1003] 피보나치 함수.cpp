#include <iostream>
using namespace std;

int dp[41][2];
// (0 Ƚ��, 1 Ƚ��) ����

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	dp[0][0] = 1; dp[1][0] = 0; // 0�� 0�� 1ȸ ����
	dp[0][1] = 0; dp[1][1] = 1; // 1�� 1�� 1ȸ ����
	for (int i = 2; i <= 40; ++i) {
		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
		dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
	}

	int k; cin >> k;
	for (int i = 0; i < k; ++i) {
		int a; cin >> a;
		cout << dp[a][0] << ' ' << dp[a][1] << '\n';
	}
	
	return 0;
}