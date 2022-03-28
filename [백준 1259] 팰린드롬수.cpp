/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseN(int n) {
	string s = to_string(n);
	reverse(s.begin(), s.end());
	return stoi(s);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;

		int ans = reverseN(n);
		if (ans == n) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}

	return 0;
}*/