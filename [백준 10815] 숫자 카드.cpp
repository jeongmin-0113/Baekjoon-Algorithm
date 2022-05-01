#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	vector <int> card;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		card.push_back(tmp);
	}
	sort(card.begin(), card.end());

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int tmp;
		cin >> tmp;
		cout << binary_search(card.begin(), card.end(), tmp) << ' ';
	}

	return 0;
}