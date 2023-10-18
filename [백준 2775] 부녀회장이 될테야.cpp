#include <iostream>
#include <algorithm>
using namespace std;

int arr[15][15];

int calcResidents(int k, int n) {
	if (arr[k][n] != 0) return arr[k][n];
	if (n == 1) return arr[k][n] = 1;

	if (arr[k][n - 1] == 0) arr[k][n-1] = calcResidents(k, n - 1);
	if (arr[k - 1][n] == 0) arr[k - 1][n] = calcResidents(k - 1, n);
	return arr[k][n] = arr[k][n - 1] + arr[k - 1][n];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	for (int i = 1; i <= 14; ++i) arr[0][i] = i;

	while (t--) {
		int k, n; cin >> k >> n;
		calcResidents(k, n);
		cout << arr[k][n] << '\n';
	}
}
