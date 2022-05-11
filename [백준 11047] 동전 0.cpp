#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	vector <int> v;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), greater<int>());

	int ans = 0;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > k) continue;
		else {
			int j = k / v[i];
			k -= v[i] * j;
			ans += j;
		}
	}
	cout << ans << '\n';

	return 0;
}