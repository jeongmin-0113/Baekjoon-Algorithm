/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>> v;
	int N; cin >> N;

	for (int i = 0; i < N; ++i) {
		int A, T; cin >> A >> T;
		v.push_back({ A,T });
	}

	sort(v.begin(), v.end());

	int endTime = 0;
	for (int i = 0; i < N; ++i) {
		if (endTime <= v[i].first) endTime = v[i].first + v[i].second;
		else endTime += v[i].second;
	}

	cout << endTime << endl;

	return 0;
}*/