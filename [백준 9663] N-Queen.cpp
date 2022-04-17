#include <iostream>
#include <vector>
using namespace std;

int n, ans = 0;
vector <int> visited(15, -1);

bool check(int q) {
	for (int i = 0; i < q; ++i) {
		if (visited[q] == visited[i] || q - i == abs(visited[q] - visited[i])) {
			return 0;
		}
	}
	return 1;
}

void nQueen(int q) {
	if (q == n) {
		ans++;
		return;
	}

	for (int i = 0; i < n; ++i) {
		visited[q] = i;
		if (check(q)) nQueen(q + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	nQueen(0);
	cout << ans;
	return 0;
}