#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int m;
	bool check[21] = { 0, };
	cin >> m;
	for (int i = 0; i < m; ++i) {
		char str[10]; int n;
		cin >> str;
		if (str[0] == 'a') {
			if (str[1] == 'd') {
				cin >> n;
				check[n] = true;
			}
			else if (str[1] == 'l') {
				fill_n(check, 21, true);
			}
		}
		else if (str[0] == 'r') {
			cin >> n;
			if (check[n]) check[n] = false;
		}
		else if (str[0] == 'c') {
			cin >> n;
			cout << check[n] << '\n';
		}
		else if (str[0] == 't') {
			cin >> n;
			if (check[n]) check[n] = false;
			else check[n] = true;
		}
		else if (str[0] == 'e') {
			fill_n(check, 21, false);
		}
	}
	return 0;
}