#include <iostream>
using namespace std;

int ans = 0;

void func(int length, int r, int c) {
	if (length == 1) return;
	int a = length / 2;
	a *= a; // 한 사분면의 넓이 계산

	int mid = length / 2;

	// 0번째부터 시작하므로 mid보다 작은 경우 / 크거나 같은 경우로 사분면이 나뉨
	if (r < mid && c < mid) {
		// 1사분면
		func(mid, r, c);
	}
	else if (r < mid && c >= mid) {
		// 2사분면
		ans += a;
		func(mid, r, c - mid);
	}
	else if (r >= mid && c < mid) {
		// 3사분면
		ans += a * 2;
		func(mid, r - mid, c);
	}
	else {
		// 4사분면
		ans += a * 3;
		func(mid, r - mid, c - mid);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, r, c; cin >> n >> r >> c;
	int length = 1;
	for (int i = 0; i < n; ++i) length *= 2;
	func(length, r, c);

	cout << ans << '\n';

	return 0;
}