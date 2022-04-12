#include <iostream>
#include <vector>
using namespace std;

int n, m;
int visit[8] = { 0, };
vector <int> v;

void bt() {
	if (v.size() == m) {
		for (int i = 0; i < v.size(); ++i) {
			cout << v[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; ++i) {
		if (visit[i-1] != 1) {
			visit[i-1] = 1;
			v.push_back(i);
			bt();
			visit[i-1] = 0;
			v.pop_back();
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	bt();
	return 0;
}