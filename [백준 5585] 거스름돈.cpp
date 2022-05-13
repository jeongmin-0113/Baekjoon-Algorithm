#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[] = { 500, 100, 50, 10, 5, 1 };
	int n;
	cin >> n;

	int money = 1000 - n;
	int ans = 0;
	int idx = 0;
	while (money > 0) {
		if (arr[idx] > money) idx++;
		else {
			money -= arr[idx];
			ans++;
		}
	}
	cout << ans << '\n';

	return 0;
}