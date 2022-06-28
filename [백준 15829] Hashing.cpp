#include <iostream>
#include <string>
using namespace std;

int r = 31;
long long M = 1234567891;
long long h[50];

void hashing(int n) {
	h[0] = 1;
	for (int i = 1; i < n; ++i) {
		h[i] = (h[i - 1] * r) % M;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int L; cin >> L;
	string s; cin >> s;
	long long ans = 0;

	hashing(L);

	for (int i = 0; i < L; ++i) {
		long long n = (long long) s[i] - 96;
		n = n * h[i];

		ans = ans + n;
	}

	cout << ans % M << '\n';

	return 0;
}