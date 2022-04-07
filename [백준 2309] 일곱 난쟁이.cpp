#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <int> v;
	int sum = 0;
	for (int i = 0; i < 9; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
		sum += tmp;
	}
	sort(v.begin(), v.end());

	int i, j;
	int exit = 0;
	for (i = 0; i < 8; ++i) {
		for (j = 1; j < 9; ++j) {

			if (sum - v[i] - v[j] == 100) {
				for (int k = 0; k < 9; ++k) {
					if (k == i || k == j) continue;
					cout << v[k] << '\n';
					exit = 1;
				}
				break;
			}

		}
		if (exit == 1) break;
	}
	return 0;
}