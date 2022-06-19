#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, v; cin >> a >> b >> v;

	int n = (v - a) / (a - b);
	if ((v - a) % (a - b) != 0) n++;

	cout << n + 1 << '\n';

	return 0;
}