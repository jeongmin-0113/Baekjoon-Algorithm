#include <iostream>
#include <vector>
using namespace std;

int k;
vector <int> v;
vector <int> lottery;

void func(int n) {
	if (lottery.size() == 6) {
		for (int i = 0; i < 6; ++i) cout << lottery[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = n; i < k; ++i) {
		lottery.push_back(v[i]);
		func(i + 1);
		lottery.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (true) {
		v.clear();
		lottery.clear();
		cin >> k;
		if (k == 0) break;
		for (int i = 0; i < k; ++i) {
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		func(0);
		cout << '\n';
	}

	return 0;
}