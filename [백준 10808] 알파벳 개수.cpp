#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	int alpha[26] = { 0, };
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		int a = (int)s[i];
		alpha[a - 97] += 1;
	}

	for (int i = 0; i < 26; ++i) {
		cout << alpha[i] << ' ';
	}
	return 0;
}