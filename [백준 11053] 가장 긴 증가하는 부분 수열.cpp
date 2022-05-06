#include <iostream>
#include <vector>
using namespace std;

int dp[1001];
vector <int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, ans = 1;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	fill(dp, dp + n, -1);
	
	dp[0] = 1;
	for (int i = 1; i < n; ++i) {
		dp[i] = 1;
		for (int j = 0; j < i; ++j) {
			if (v[j] < v[i]) dp[i] = max(dp[i], dp[j] + 1);
		}
		ans = max(ans, dp[i]);
	}

	cout << ans << '\n';

	return 0;
}