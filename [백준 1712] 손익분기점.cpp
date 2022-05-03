#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	if (b >= c) {
		cout << -1 << '\n';
		return 0;
	}

	int cnt = 0;
	int gap = c - b;
	cnt = a / gap;
	if (gap * cnt <= a) cnt++;

	cout << cnt << '\n';

	return 0;
}