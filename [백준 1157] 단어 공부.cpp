#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	int n[26] = { 0, };
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		int tmp;
		if (islower(s[i])) { tmp = (int)s[i] - 97; }
		else { tmp = (int)s[i] - 65; }
		n[tmp]++;
	}

	int max = 0, cnt = 0, idx = 0;
	for (int i = 0; i < 26; ++i) {
		if (max < n[i]) {
			max = n[i];
			cnt = 1;
			idx = i;
		}
		else if (max == n[i]) {
			cnt++;
		}
	}

	if (cnt > 1) cout << "?";
	else cout << (char)(idx + 'A');

	return 0;
}