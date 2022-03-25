#include <iostream>
#include <algorithm>
using namespace std;

int greatestDiv(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// 입력부
	int num1, num2;
	cin >> num1 >> num2;
	int bigger = max(num1, num2);
	int smaller = min(num1, num2);

	// 최대공약수
	int GCD = greatestDiv(bigger, smaller);

	// 최소공배수
	int LCM = (num1 * num2) / GCD;

	// 출력부
	cout << GCD << '\n';
	cout << LCM << '\n';

	return 0;
}