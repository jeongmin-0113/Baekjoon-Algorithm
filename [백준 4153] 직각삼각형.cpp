#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	while (true) {
		int n[3];
		cin >> n[0] >> n[1] >> n[2];
		if (!n[0] && !n[1] && !n[2]) break;
		sort(n, n+3);

		if (pow(n[0], 2) + pow(n[1], 2) == pow(n[2], 2)) cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}
	
	return 0;
}