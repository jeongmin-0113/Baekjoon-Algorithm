#include <iostream>
#include <queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, L; cin >> N >> L;
	deque<pair<int, int>> dq;
	for (int i = 1; i <= N; ++i) {
		int t; cin >> t;
		while (!dq.empty() && dq.front().second < i - L + 1) dq.pop_front();
		while (!dq.empty() && dq.back().first >= t) dq.pop_back();
		dq.push_back(make_pair(t, i));
		cout << dq.front().first << " ";
	}
}