#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	vector<pair<int, int>> score;
	for (int i = 0; i < 8; ++i) {
		int s;
		cin >> s;
		score.push_back(pair<int, int>(s, i));
	}
	sort(score.begin(), score.end(), greater<>());

	int ans = 0;
	vector <int> order;
	for (int i = 0; i < 5; ++i) {
		ans += score[i].first;
		order.push_back(score[i].second + 1);
	}
	cout << ans << '\n';
	sort(order.begin(), order.end());
	for (int i = 0; i < 5; ++i) {
		cout << order[i] << ' ';
	}

	return 0;
}