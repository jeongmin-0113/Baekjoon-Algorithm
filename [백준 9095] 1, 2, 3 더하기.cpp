#include <iostream>
using namespace std;

int arr[12];
int dp(int n) {
	if (arr[n] != 0) return arr[n];
	return arr[n] = dp(n - 1) + dp(n - 2) + dp(n - 3);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	arr[1] = 1; arr[2] = 2; arr[3] = 4;

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << dp(n) << '\n';
	}

	return 0;
}