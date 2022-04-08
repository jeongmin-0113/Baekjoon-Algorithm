#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector <int> uniW;
	for (int i = 0; i < 10; ++i) {
		int tmp;
		cin >> tmp;
		uniW.push_back(tmp);
	}
	sort(uniW.begin(), uniW.end(), greater<int>());

	vector <int> uniK;
	for (int i = 0; i < 10; ++i) {
		int tmp;
		cin >> tmp;
		uniK.push_back(tmp);
	}
	sort(uniK.begin(), uniK.end(), greater<int>());

	int sumW = 0, sumK = 0;
	for (int i = 0; i < 3; ++i) {
		sumW += uniW[i];
		sumK += uniK[i];
	}
	cout << sumW << ' ' << sumK << '\n';
	return 0;
}