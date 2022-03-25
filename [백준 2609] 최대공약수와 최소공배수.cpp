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

	// �Էº�
	int num1, num2;
	cin >> num1 >> num2;
	int bigger = max(num1, num2);
	int smaller = min(num1, num2);

	// �ִ�����
	int GCD = greatestDiv(bigger, smaller);

	// �ּҰ����
	int LCM = (num1 * num2) / GCD;

	// ��º�
	cout << GCD << '\n';
	cout << LCM << '\n';

	return 0;
}