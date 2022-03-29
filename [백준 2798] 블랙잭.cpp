#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	int* lst = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> lst[i];
	}
	
	sort(lst, lst + n);
	int maxSum = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i+1; j < n; ++j) {
			for (int k = j+1; k < n; ++k) {
				sum = lst[i] + lst[j] + lst[k];
				if (sum > maxSum && sum <= m) maxSum = sum;
				else if (sum > m) break;
			}
		}
	}
	
	cout << maxSum << '\n';
	return 0;
}