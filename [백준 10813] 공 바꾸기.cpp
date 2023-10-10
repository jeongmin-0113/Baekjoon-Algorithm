#include <iostream>
#include <algorithm>
using namespace std;

int bucket[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		bucket[i] = i;
	}

	while (m--) {
		int a, b; cin >> a >> b;
		swap(bucket[a], bucket[b]);
	}

	for (int i = 1; i <= n; i++) {
		cout << bucket[i] << ' ';
	}
	cout << '\n';
}
