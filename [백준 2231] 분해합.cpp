#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i, sum, k;
	cin >> n;
	for (i = 1; i < n; ++i) {
		sum = i;
		k = i;
		while (k) {
			sum += k % 10;
			k = k / 10;
		}
		if (sum == n) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << '0' << '\n';
	return 0;
}