#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

pair<int, int> arr[50002];
int nxt[50002];
long long ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, G, B, D;
	cin >> N >> G >> B >> D;
	for (int i = 1; i <= N; ++i) cin >> arr[i].first >> arr[i].second;
	arr[++N].first = D; arr[N].second = -1;
	sort(arr + 1, arr + N + 1);

	stack<pair<int, int>> s;
	for (int i = N; i >= 1; i--) {
		while (!s.empty() && s.top().first >= arr[i].second) s.pop();
		if (s.empty()) nxt[i] = -1;
		else nxt[i] = s.top().second;

		s.emplace(arr[i].second, i);
	}

	for (int i = 1; i <= N; ++i) {
		B -= arr[i].first - arr[i - 1].first;
		if (B < 0) { cout << -1; return 0; }

		int cost = min(G, arr[nxt[i]].first - arr[i].first);
		ans += 1LL * max(0, cost - B) * arr[i].second;
		B = max(B, cost);
	}

	cout << ans;

	return 0;
}