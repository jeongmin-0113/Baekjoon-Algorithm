#include <iostream>
using namespace std;

long long a, b, c;
long long func(long long b) {
	if (b == 0) return 1;
	else if (b == 1) return a % c;
	
	long long ret = func(b / 2) % c;
	if (b % 2 == 0) return ret * ret % c;
	else return ret * ret % c * a % c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c;
	cout << func(b) << '\n';

	return 0;
}