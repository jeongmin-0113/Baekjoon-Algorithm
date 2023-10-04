#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T, N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	while (T--) {
		cin >> N;
		vector<pair<int, int>> v;
		for (int i = 0; i < N; i++) 
		{
			int a, b; cin >> a >> b;
			v.push_back({ a,b });
		}
		sort(v.begin(), v.end());

		int cnt = 1;
		int second_max = v[0].second;

		for (int i = 1; i < N; i++) {
			if (second_max > v[i].second) {
				cnt++;
				second_max = v[i].second;
			}
		}

		cout << cnt << '\n';
	}
}
