#include <iostream>
using namespace std;

int w = 500;
int n, k;
int kit[8] = { 0, };
int visited[8] = { 0, };
int cnt = 0, ans = 0;
void bt() {
	if (cnt == n) ans++;
	for (int i = 0; i < n; ++i) {
		if (visited[i] != 1) {
			if (w - k + kit[i] >= 500) {
				visited[i] = 1;
				w += kit[i] - k;
				cnt++;
				bt();
				cnt--;
				w -= kit[i] - k;
				visited[i] = 0;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> kit[i];
	bt();
	cout << ans << '\n';
	return 0;
}