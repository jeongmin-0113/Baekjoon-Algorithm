#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int ans = 9999;

	// ��輱: x=0,w�ų� y=0,h
	int arr[4];
	arr[0] = x; // x=0�� ��輱���� �Ÿ�
	arr[1] = w - x; // x=w�� ��輱���� �Ÿ�
	arr[2] = y; // y=0�� ��輱���� �Ÿ�
	arr[3] = h - y; // y=h�� ��輱���� �Ÿ�

	for (int i = 0; i < 4; ++i) ans = min(arr[i], ans);
	cout << ans << '\n';

	return 0;
}