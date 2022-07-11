#include <iostream>
using namespace std;

int ans = 0;

void func(int length, int r, int c) {
	if (length == 1) return;
	int a = length / 2;
	a *= a; // �� ��и��� ���� ���

	int mid = (length / 2) - 1; // 0��°���� �����ϹǷ� 1 ����

	if (r <= mid && c <= mid) {
		// 1��и�
		func(mid + 1, r, c);
	}
	else if (r <= mid && c > mid) {
		// 2��и�
		ans += a;
		func(mid + 1, r, c - (mid + 1));
	}
	else if (r > mid && c <= mid) {
		// 3��и�
		ans += a * 2;
		func(mid + 1, r - (mid + 1), c);
	}
	else {
		// 4��и�
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