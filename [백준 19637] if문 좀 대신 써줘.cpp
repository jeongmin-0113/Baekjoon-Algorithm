#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m; cin >> n >> m;

	vector <int> v1;
	vector <string> v2;
	for (int i = 0; i < n; ++i) {
		int str; string s;
		cin >> s >> str;
		v1.push_back(str);
		v2.push_back(s);
	}
	
	while (m--) {
		int state; cin >> state;
		int it = lower_bound(v1.begin(), v1.end(), state) - v1.begin();
		cout << v2[it] << '\n'; 
	}

	return 0;
}