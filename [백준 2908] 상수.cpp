#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	int inversA = 0, inversB = 0;
	for (int i = 0; i < 3; ++i) {
		inversA = inversA * 10 + a % 10;
		a = a / 10;
		inversB = inversB * 10 + b % 10;
		b = b / 10;
	}
	cout << max(inversA, inversB) << '\n';
	return 0;
}