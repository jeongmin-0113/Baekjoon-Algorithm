#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		vector <int> score;
		for (int j = 0; j < 5; ++j) {
			int tmp;
			cin >> tmp;
			score.push_back(tmp);
		}
		sort(score.begin(), score.end());
		if (score[3] - score[1] >= 4) {
			cout << "KIN" << '\n';
			continue;
		}
		else {
			cout << score[1] + score[2] + score[3] << '\n';
			continue;
		}
	}
	return 0;
}