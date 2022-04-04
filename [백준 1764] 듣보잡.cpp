#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	vector <string> see;
	vector <string> seeNhear;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		string name;
		cin >> name;
		see.push_back(name);
	}
	sort(see.begin(), see.end());

	for (int i = 0; i < m; ++i) {
		string name;
		cin >> name;
		if (binary_search(see.begin(), see.end(), name)) {
			seeNhear.push_back(name);
		}
	}
	sort(seeNhear.begin(), seeNhear.end());

	int size = seeNhear.size();
	cout << size << '\n';
	for (int i = 0; i < size; ++i) cout << seeNhear[i] << '\n';
	return 0;
}