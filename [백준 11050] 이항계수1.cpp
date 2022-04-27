#include <iostream>
using namespace std;

int facto(int a) {
	if (a <= 1) return 1;
	else return a * facto(a - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	cout << facto(n) / (facto(k) * facto(n - k));

	return 0;
}