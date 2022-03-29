#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	int* lst = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> lst[i];
	}
	sort(lst, lst + n);
	cout << lst[0] << ' ' << lst[n - 1];
}