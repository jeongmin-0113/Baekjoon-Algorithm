#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	vector <int> v1;
	cin >> t;

	for (int k = 0; k < t; ++k) {
		v1.clear();
		int n, m;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			v1.push_back(tmp);
		}
		sort(v1.begin(), v1.end());

		cin >> m;
		for (int i = 0; i < m; ++i)
		{
			int tmp;
			cin >> tmp;
			cout << binary_search(v1.begin(), v1.end(), tmp) << '\n';
		}
	}
	
	return 0;
}