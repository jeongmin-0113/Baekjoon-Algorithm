#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int IMPOSSIBLE = 1987654321;
int n;
int w[16][16];
int dp[16][1 << 16];

int TSP(int cur, int visited) {
	int& ret = dp[cur][visited];
	if (ret != -1) return ret;

	if (visited == (1 << n) - 1) {
		if (w[cur][0] != 0) return w[cur][0];
		return IMPOSSIBLE;
	}

	ret = IMPOSSIBLE;
	for (int i = 0; i < n; ++i) {
		if (visited & (1 << i) || w[cur][i] == 0) continue;
		ret = min(ret, TSP(i, visited | (1 << i)) + w[cur][i]);
	}
	
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> w[i][j];
		}
	}

	memset(dp, -1, sizeof(dp));
	cout << TSP(0, 1) << '\n';


	return 0;
}