#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s, key;
	getline(cin, s);
	cin >> key;
	int kSize = key.size();
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ') cout << ' ';
		else
		{
			int output = s[i] - key[i % kSize];
			if (output <= 0) cout << (char)(output + 'z');
			else cout << (char)('a' + output - 1);
		}
	}
	return 0;
}