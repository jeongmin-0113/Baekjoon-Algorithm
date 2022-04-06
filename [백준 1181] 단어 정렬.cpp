#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2) {
	int s1length = s1.length();
	int s2length = s2.length();
	if (s1length != s2length) return s1length < s2length;
	else return s1 < s2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	vector <string> wordList;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		wordList.push_back(s);
	}
	sort(wordList.begin(), wordList.end(), compare);
	wordList.erase(unique(wordList.begin(), wordList.end()), wordList.end());

	for (int i = 0; i < wordList.size(); ++i) {
		cout << wordList[i] << '\n';
	}

	return 0;
}