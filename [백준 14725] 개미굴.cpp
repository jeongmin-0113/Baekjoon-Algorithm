#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

set <string> s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int k; cin >> k;
		string str = "";
		for (int j = 0; j < k; ++j) {
			string tmp; cin >> tmp;
			str += "-" + tmp;
			s.insert(str);
		}
	}

	for (auto v : s) {
		int cnt = count(v.begin(), v.end(), '-');
		int pos = v.find_last_of('-');
		string tmp = v.substr(pos + 1);
		while (cnt > 1) { cout << "--"; cnt--; }
		cout << tmp << '\n';
	}

	return 0;
}