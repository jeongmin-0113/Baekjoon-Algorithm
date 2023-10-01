#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	
	vector<int> dp(N + 1);
	vector<int> parent(N + 1);

	parent[1] = -1;
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;
		parent[i] = i - 1;

		if ((i % 3 == 0) && (dp[i] > dp[i/3] + 1)) {
			dp[i] = dp[i / 3] + 1;
			parent[i] = i / 3;
		}
		if ((i % 2 == 0) && (dp[i] > dp[i / 2] + 1)) {
			dp[i] = dp[i / 2] + 1;
			parent[i] = i / 2;
		}
	}

	cout << dp[N] << '\n';

	int cur = N;
	while (cur != -1) {
		cout << cur << ' ';
		cur = parent[cur];
	}
}
