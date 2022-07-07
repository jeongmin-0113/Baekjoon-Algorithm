#include <iostream>
using namespace std;

int n;
int w = 0, b = 0;
int paper[129][129];

bool isOneColored(int x, int y, int size) {
	int firstColor = paper[x][y];
	for (int i = x; i < x + size; ++i) {
		for (int j = y; j < y + size; ++j) {
			if (firstColor != paper[i][j]) return false;
		}
	}
	
	if (firstColor == 0) w++;
	else b++;
	return true;
}

void divide(int x, int y, int size) {
	if (!isOneColored(x, y, size)) {
		size = size / 2;

		divide(x, y, size);
		divide(x + size, y, size);
		divide(x, y + size, size);
		divide(x + size, y + size, size);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> paper[i][j];
		}
	}

	divide(0, 0, n);
	cout << w << '\n';
	cout << b << '\n';

	return 0;
}