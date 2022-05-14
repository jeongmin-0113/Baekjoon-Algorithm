#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int j, n;
		cin >> j >> n;
		
		vector <int> box;
		for (int i = 0; i < n; ++i) {
			int r, c;
			cin >> r >> c;
			box.push_back(r * c);
		}
		sort(box.begin(), box.end(), greater<int>());

		int ans = 0, idx = 0;
		while (true) {
			if (j <= 0) break;
			else {
				j -= box[idx];
				idx++;
				ans++;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}