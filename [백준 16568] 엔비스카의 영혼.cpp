#include <iostream>
using namespace std;

int dp[1000001]; // N명 제쳤을 때의 최소 시간 저장

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, a, b;
	// 기다리는 사람 수, a명 새치기, b명 새치기
	cin >> N >> a >> b;

	fill_n(dp, 1000001, 1000001);
	dp[0] = 0;

	for (int i = 1; i <= N; ++i) {
		dp[i] = dp[i - 1] + 1;
		if (i - a - 1 >= 0) {
			dp[i] = min(dp[i], dp[i - a - 1] + 1);
		}
		if (i - b - 1 >= 0) {
			dp[i] = min(dp[i], dp[i - b - 1] + 1);
		}
	}

	cout << dp[N] << endl;

	return 0;
}