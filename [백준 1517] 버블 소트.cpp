#include <iostream>
using namespace std;

int arr[500001];
int sorted[500001];
int n;
long long cnt;

void sort(int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			sorted[k++] = arr[i++];
		}
		else {
			sorted[k++] = arr[j++];
			cnt = cnt + mid - i + 1;
		}
	}

	while (i <= mid) sorted[k++] = arr[i++];
	while (j <= right) sorted[k++] = arr[j++];

	for (int t = left; t <= right; ++t) {
		arr[t] = sorted[t];
	}
}

void divide(int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		divide(left, mid);
		divide(mid + 1, right);
		sort(left, mid, right);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	divide(0, n - 1);
	cout << cnt << '\n';

	return 0;
}