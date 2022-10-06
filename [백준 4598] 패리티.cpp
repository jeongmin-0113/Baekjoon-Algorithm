/*#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (true) {
		string tmp; cin >> tmp;
		if (tmp == "#") break;
		
		int one = 0;
		for (int i = 0; i < tmp.size(); ++i) {
			if (tmp[i] == '1') one++;
		}

		if (tmp[tmp.size()-1] == 'e') {
			tmp = tmp.substr(0, tmp.size() - 1);
			if (one % 2 == 0) tmp += '0';
			else tmp += '1';
		}
		else {
			tmp = tmp.substr(0, tmp.size() - 1);
			if (one % 2 == 0)tmp += '1';
			else tmp += '0';
		}

		cout << tmp << endl;
	}

	return 0;
}*/