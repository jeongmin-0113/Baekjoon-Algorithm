#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int r;
	cin >> r;
	for (int i = 0; i < r; ++i) {
		int n;
		string s;
		cin >> n >> s;
		for (int j = 0; j < s.size(); ++j) {
			for (int k = 0; k < n; ++k) cout << s[j];
		}
		cout << '\n';
	}

	return 0;
}