/*#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void checkLOVE(string s, int* arr) {
	int length = s.size();
	for (int i = 0; i < length; ++i) {
		if (s[i] == 'L') arr[0]++;
		else if (s[i] == 'O') arr[1]++;
		else if (s[i] == 'V') arr[2]++;
		else if (s[i] == 'E') arr[3]++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<string> teamList; // ∆¿ ¿Ã∏ß ¿˙¿Â
	vector<int> teamNum; // ¡§∑ƒ »ƒ ∆¿ øÏΩ¬ »Æ∑¸ ¿˙¿Â

	int YDnum[4] = { 0,0,0,0 };
	string name; cin >> name;
	checkLOVE(name, YDnum);

	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		string teamName; cin >> teamName;
		teamList.push_back(teamName);
	}

	sort(teamList.begin(), teamList.end());

	int maxRate = 0; string WinTeam = teamList[0];
	for (int i = 0; i < n; ++i) {
		int arr[4] = { 0,0,0,0 }; // ∆¿ love ∞≥ºˆ ¿˙¿Â
		checkLOVE(teamList[i], arr);

		for (int j = 0; j < 4; ++j) arr[j] += YDnum[j];
		int rate = ((arr[0] + arr[1]) * (arr[0] + arr[2]) *
			(arr[0] + arr[3]) * (arr[1] + arr[2]) * (arr[1] + arr[3]) *
			(arr[2] + arr[3])) % 100;

		if (maxRate < rate) {
			maxRate = rate;
			WinTeam = teamList[i];
		}
	}

	cout << WinTeam << endl;

	return 0;
}*/