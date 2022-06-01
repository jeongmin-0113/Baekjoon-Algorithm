#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector <int> v1;
	vector <int> v2(8001, 0);
	int n; cin >> n;
	int sum = 0;
	for (int i = 0; i < n;++i) {
		int tmp; cin >> tmp;
		sum += tmp;
		v1.push_back(tmp);
		v2[tmp + 4000]++;
	}
	sort(v1.begin(), v1.end());

	// Æò±Õ
	int avg = round((float)sum / n);
	if (avg == -0) cout << 0 << '\n';
	else cout << avg << '\n';

	// Áß¾Ó°ª
	int middle = round(n / 2);
	cout << v1[middle] << '\n';

	// ÃÖºó°ª
	int m = 0;
	vector <int> v3;
	for (int i = 0; i < 8001; ++i) {
		if (v2[i] > v2[m]) { m = i; v3.clear(); v3.push_back(i); }
		else if (v2[i] == v2[m]) { v3.push_back(i); }
	}
	
	if (v3.size() == 1) cout << v3[0]-4000 << '\n';
	else {
		sort(v3.begin(), v3.end());
		cout << v3[1]-4000 << '\n';
	}

	// ¹üÀ§
	cout << v1.back() - v1.front() << '\n';

	return 0;
}