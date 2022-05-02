#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector <int> v;
void func(int k) {
	if (v.size() == m) {
		for (int i = 0; i < m; ++i) cout << v[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = k; i <= n; ++i) {
		v.push_back(i);
		func(i);
		v.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	func(1);

	return 0;
}