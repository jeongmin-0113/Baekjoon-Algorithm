#include <iostream>
#include <vector>
using namespace std;

vector <int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp; cin >> tmp;
		if (v.empty()) v.push_back(tmp);
		else if (v.back() < tmp) v.push_back(tmp);
		else *lower_bound(v.begin(), v.end(), tmp) = tmp;
	}

	cout << v.size() << '\n';
	return 0;
}