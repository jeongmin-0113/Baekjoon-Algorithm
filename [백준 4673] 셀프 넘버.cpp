#include <iostream>
using namespace std;

int arr[10001];
int func() {
	for (int n = 1; n <= 10000; ++n) {
		int ret = n;
		int ans = ret;
		while (ret) {
			ans += ret % 10;
			ret = ret / 10;
		}
		if (ans <= 10000) arr[ans] = 1;
	}

	for (int i = 1; i < 10001; ++i) {
		if (!arr[i]) cout << i << '\n';
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	func();
	return 0;
}