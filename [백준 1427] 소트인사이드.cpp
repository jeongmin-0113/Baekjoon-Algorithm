#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	vector <int> v;
	cin >> n;
	while (n > 0) {
		int tmp;
		tmp = n % 10;
		n = n / 10;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
	}
	return 0;
}