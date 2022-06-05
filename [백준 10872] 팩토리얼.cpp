#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int facto = 1;
	while (true) {
		if (n == 0 || n == 1) break;
		facto = facto * n;
		n--;
	}
	cout << facto << '\n';

	return 0;
}