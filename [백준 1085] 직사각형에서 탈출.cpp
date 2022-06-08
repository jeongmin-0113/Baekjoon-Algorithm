#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int ans = 9999;

	// 경계선: x=0,w거나 y=0,h
	int arr[4];
	arr[0] = x; // x=0인 경계선까지 거리
	arr[1] = w - x; // x=w인 경계선까지 거리
	arr[2] = y; // y=0인 경계선까지 거리
	arr[3] = h - y; // y=h인 경계선까지 거리

	for (int i = 0; i < 4; ++i) ans = min(arr[i], ans);
	cout << ans << '\n';

	return 0;
}