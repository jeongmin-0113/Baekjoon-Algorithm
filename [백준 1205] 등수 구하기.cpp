#include <iostream>
using namespace std;

int scoreboard[51];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, score, P; cin >> N >> score >> P;
	
	if (N == 0) {
		cout << 1;
		return 0;
	}

	for (int i = 0; i < N; ++i) {
		cin >> scoreboard[i];
	}

	if ((N == P) && (score <= scoreboard[P - 1])) {
		cout << -1;
		return 0;
	}
	
	int cnt = 0;
	while (true) {
		if (scoreboard[cnt] > score) cnt++;
		else break;
	}

	cout << cnt + 1;
}
