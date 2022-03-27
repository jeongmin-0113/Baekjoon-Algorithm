#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	// 입력부
	int h, w, x, y;
	cin >> h >> w >> x >> y;

	int** B;
	B = new int* [h + x];
	for (int i = 0; i < h+x; ++i) {
		B[i] = new int[w + y];
	}

	for (int i = 0; i < h + x; ++i) {
		for (int j = 0; j < w + y; ++j) {
			cin >> B[i][j];
		}
	}

	// 겹치는 부분에서 원래 값을 빼줌.
	for (int i = 0; i < h + x; ++i) {
		for (int j = 0; j < w + y; ++j) {
			if (i >= x && j >= y) {
				B[i][j] = B[i][j] - B[i - x][j - y];
			}
		}
	}

	// 출력부
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cout << B[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}