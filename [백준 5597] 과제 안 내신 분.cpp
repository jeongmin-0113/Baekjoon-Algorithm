#include <iostream>
using namespace std;

int students[30];
int main() {
	for (int i = 0; i < 28; ++i) {
		int num; cin >> num;
		students[num-1] = 1;
	}

	for (int i = 0; i < 30; ++i) {
		if (students[i] != 1) {
			cout << i + 1 << '\n';
		}
	}

	return 0;
}