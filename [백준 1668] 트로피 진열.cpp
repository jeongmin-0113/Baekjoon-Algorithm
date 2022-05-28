#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	int n; cin >> n;
	while (n--) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	vector <int> L;
	L.push_back(v.front());
	for (int i = 1; i < v.size(); ++i) {
		if (L.back() < v[i]) L.push_back(v[i]);
	}

	vector <int> R;
	R.push_back(v.back());
	for (int i = v.size()-2; i >= 0; --i) {
		if (R.back() < v[i]) R.push_back(v[i]);
	}

	cout << L.size() << '\n';
	cout << R.size() << '\n';
}