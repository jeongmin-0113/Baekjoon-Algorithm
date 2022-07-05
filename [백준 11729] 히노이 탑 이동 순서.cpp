#include <iostream>
#include <vector>
using namespace std;

int n;
vector <pair<char, char>> v;
int cnt = 0;

void func(int num, char a, char b, char c) {
	cnt++;
	if (num == 1) {
		v.push_back({ a,c });
		return;
	}
	else {
		func(num - 1, a, c, b);
		v.push_back({ a,c });
		func(num - 1, b, a, c);
	}
}

int main() {
	cin >> n;
	func(n, '1', '2', '3');

	cout << cnt << '\n';
	for (int i = 0; i < v.size(); ++i) cout << v[i].first << ' ' << v[i].second << '\n';
	return 0;
}