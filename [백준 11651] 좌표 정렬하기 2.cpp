#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second) return a.second < b.second;
	else return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;

	vector <pair<int, int>> point;
	for (int i = 0; i < n; ++i) {
		int x, y; cin >> x >> y;
		point.push_back(make_pair(x, y));
	}
	sort(point.begin(), point.end(), compare);

	for (int i = 0; i < n; ++i) {
		cout << point[i].first << ' ' << point[i].second << '\n';
	}
}