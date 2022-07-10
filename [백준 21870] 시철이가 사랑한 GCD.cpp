#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[200001];

int calc(int a, int b) {
	if (b == 0) return a;
	else return calc(b, a % b);
}

int func(int left, int right) {
	int ret = arr[right];
	for (int i = left; i < right; ++i) {
		ret = calc(ret,  arr[i]);
	}
	return ret;
}

int gcd(int left, int right) {
	if (left >= right) return arr[right];
	int mid = (left + right - 1) / 2;
	int ret = max(gcd(left, mid) + func(mid + 1, right), func(left, mid) + gcd(mid + 1, right));
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	int ans = gcd(0, n - 1);
	cout << ans;

	return 0;
}