#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int c, l;
vector <char> v;
vector <char> ans;

bool isCode(vector <char> v) {
	int con = 0, vow = 0;
	for (int i = 0; i < l; ++i) {
		if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') vow++;
		else con++;
	}
	if (vow >= 1 && con >= 2) return true;
	return false;
}
void func(int d) {
	if (ans.size() == l) {
		if (isCode(ans)) {
			for (int i = 0; i < l; ++i) cout << ans[i];
			cout << '\n';
		}
		return;
	}
	for (int i = d; i < c; ++i) {
		ans.push_back(v[i]);
		func(i+1);
		ans.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> l >> c;
	for (int i = 0; i < c; ++i) {
		char tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	func(0);

	return 0;
}