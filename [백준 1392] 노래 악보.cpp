/*#include <iostream>
using namespace std;

int timeArr[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, Q;
	cin >> N >> Q;

	int last = 0;
	for (int i = 1; i <= N; ++i) {
		int time; cin >> time;
		for (int j = 0; j < time; ++j) {
			timeArr[last++] = i;
		}
	}

	while (Q--) {
		int k; cin >> k;
		cout << timeArr[k] << endl;
	}

	return 0;
}*/