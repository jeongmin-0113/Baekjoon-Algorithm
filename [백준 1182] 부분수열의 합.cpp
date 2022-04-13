#include <iostream>
using namespace std;

int n, s;
int ans = 0;
int num[21];

void bt(int idx, int sum) {
	if (idx == n) return;
	if (sum + num[idx] == s) ans++;

	bt(idx + 1, sum + num[idx]);
	bt(idx + 1, sum);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> s;
	for (int i = 0; i < n; ++i) cin >> num[i];
	bt(0, 0);

	cout << ans << '\n';

	return 0;
}