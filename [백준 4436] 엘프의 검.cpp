#include <iostream>
using namespace std;

void countNum(long long n, int* arr) {
	while (n > 0) {
		int rem = n % 10;
		n = n / 10;
		arr[rem]++;
	}
}

bool checkNum(int* arr) {
	for (int i = 0; i < 10; ++i) {
		if (arr[i] == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	while (cin >> n) {
		int numArr[10]; // 0~9까지 숫자 나온 횟수 저장
		fill_n(numArr, 10, 0);

		int k = 0;
		while (true) {
			k++;
			long long num = k * n;
			countNum(num, numArr);

			if (checkNum(numArr)) break;
		}

		cout << k << '\n';
	}

	return 0;
}