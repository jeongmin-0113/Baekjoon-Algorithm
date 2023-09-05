#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
int ans[8];

void printSeq(int length, int min) {
	if (length == m) {
		for (int i = 0; i < m; i++) cout << ans[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = min; i < n; i++) {
		ans[length] = arr[i];
		printSeq(length + 1, i);
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	printSeq(0, 0);
}