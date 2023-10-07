#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int k, n;
int blankLine;

char prevString[26];
char nextString[26];

bool ladder[1000][26];

void searchPrevString(int curLine) {
	if (curLine >= blankLine) return;
	for (int i = 0; i < k-1; ++i) {
		if (ladder[curLine][i] == 1) {
			char tmp = prevString[i];
			prevString[i] = prevString[i + 1];
			prevString[i + 1] = tmp;
		}
	}
	searchPrevString(curLine + 1);
}

void searchNextString(int curLine) {
	if (curLine <= blankLine) return;
	for (int i = 0; i < k - 1; ++i) {
		if (ladder[curLine][i] == 1) {
			char tmp = nextString[i];
			nextString[i] = nextString[i + 1];
			nextString[i + 1] = tmp;
		}
	}
	searchNextString(curLine - 1);
}

void printErrorString() {
	for (int i = 0; i < k - 1; ++i) {
		cout << 'x';
	}
	cout << '\n';
}

void printAnswerLadder() {
	for (int i = 0; i < k - 1; ++i) {
		if (ladder[blankLine][i] == 0) cout << '*';
		else cout << '-';
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> k;
	cin >> n;
	string s; cin >> s;

	for (int i = 0; i < k; ++i) {
		prevString[i] = (char)(65 + i);
		nextString[i] = s[i];
	}

	for (int i = 0; i < n; ++i) {
		string tmp; cin >> tmp;
		for (int j = 0; j < k-1; ++j) {
			if (tmp[j] == '*') ladder[i][j] = 0;
			else if (tmp[j] == '-') ladder[i][j] = 1;
			else { blankLine = i; break; }
		}
	}

	searchPrevString(0);
	searchNextString(n-1);

	for (int i = 0; i < k - 1; ++i) {
		if (prevString[i] == nextString[i]) {
			ladder[blankLine][i] = 0;
		}
		else if (prevString[i] != nextString[i]) {
			if (prevString[i] != nextString[i + 1]) {
				printErrorString();
				return 0;
			}
			else {
				ladder[blankLine][i] = 1;
				char tmp = prevString[i];
				prevString[i] = prevString[i + 1];
				prevString[i + 1] = tmp;
			}
		}
	}

	printAnswerLadder();
}
