#include <iostream>
#include <string>
using namespace std;

int alphaArr[26];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	fill(alphaArr, alphaArr + 26, -1);
	string s; cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		int tmp = s[i] - 'a';
		if (alphaArr[tmp] == -1) alphaArr[tmp] = i;
	}

	for (int i = 0; i < 26; ++i) {
		cout << alphaArr[i] << ' ';
	}

	return 0;
}