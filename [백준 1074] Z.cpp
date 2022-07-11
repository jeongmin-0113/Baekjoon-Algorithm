#include <iostream>
using namespace std;

int ans = 0;

void func(int length, int r, int c) {
	if (length == 1) return;
	int a = length / 2;
	a *= a; // 한 사분면의 넓이 계산

	int mid = (length / 2) - 1; // 0번째부터 시작하므로 1 빼줌

	if (r <= mid && c <= mid) {
		// 1사분면
		func(mid + 1, r, c);
	}
	else if (r <= mid && c > mid) {
		// 2사분면
		ans += a;
		func(mid + 1, r, c - (mid + 1));
	}
	else if (r > mid && c <= mid) {
		// 3사분면
		ans += a * 2;
		func(mid + 1, r - (mid + 1), c);
	}
	else {
		// 4사분면
		ans += a * 3;
		func(mid + 1, r - (mid + 1), c - (mid + 1));
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