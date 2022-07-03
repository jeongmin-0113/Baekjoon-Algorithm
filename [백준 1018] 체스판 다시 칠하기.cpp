#include <iostream>
#include <string>
using namespace std;

char arr[51][51];
char BW[2][8] = { {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'} };
char WB[2][8] = { {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} };

int isCorrectBW(int i, int j) {
	int ret = 0;

	for (int a = 0; a < 8; ++a) {
		for (int b = 0; b < 8; ++b) {
			int k = a % 2;
			if (arr[i + a][j + b] != BW[k][b]) ret++;
		}
	}
	return ret;
}

int isCorrectWB(int i, int j) {
	int ret = 0;

	for (int a = 0; a < 8; ++a) {
		for (int b = 0; b < 8; ++b) {
			int k = a % 2;
			if (arr[i + a][j + b] != WB[k][b]) ret++;
		}
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < m; ++j) {
			arr[i][j] = tmp[j];
		}
	}

	int ans = 1000;
	for (int i = 0; i <= n - 8; ++i) {
		for (int j = 0; j <= m - 8; ++j) {
			int BWans = isCorrectBW(i, j);
			int WBans = isCorrectWB(i, j);

			if (BWans < WBans) ans = min(ans, BWans);
			else ans = min(ans, WBans);
		}
	}

	cout << ans << '\n';
	return 0;
}