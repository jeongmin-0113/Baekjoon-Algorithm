#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector <int> v;

void bt(int num) {
	if (v.size() == m) {
		for (int i = 0; i < v.size(); ++i) cout << v[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = num; i <= n; ++i) {
		v.push_back(i);
		bt(i+1);
		v.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	bt(1);
	return 0;
}