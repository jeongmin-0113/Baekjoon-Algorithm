#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <int> fail(string pat) {
	vector <int> ret(pat.length());
	for (int i = 1, j = 0; i < pat.length(); ++i) {
		while (j > 0 && pat[i] != pat[j]) j = ret[j - 1];
		if (pat[i] == pat[j])ret[i] = ++j;
	}
	return ret;
}

vector <int> KMP(string tar, string pat) {
	vector <int> pi = fail(pat);
	vector <int> pos;
	for (int i = 0, j = 0; i < tar.length(); ++i) {
		while (j > 0 && tar[i] != pat[j]) j = pi[j - 1];
		if (tar[i] == pat[j]) {
			if (j == pat.length() - 1) {
				pos.push_back(i - j);
				j = pi[j];
			}
			else j++;
		}
	}
	return pos;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string t, p;
	getline(cin, t);
	getline(cin, p);
	
	vector<int> pos = KMP(t, p);
	cout << pos.size() << '\n';
	for (int i = 0; i < pos.size(); ++i) cout << pos[i] + 1 << ' ';
	return 0;
}