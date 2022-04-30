#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector <int> ans;

void func() {
	if (ans.size() == m) {
		for (int i = 0; i < m; ++i) cout << ans[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; ++i) {
		ans.push_back(i);
		func();
		ans.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	func();
	
	return 0;
}