#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int isVPS = 1;
		string s;
		vector <char> v;
		cin >> s;
		while (s.size() > 0)
		{
			char tmp = s[0];
			s.erase(0, 1);
			if (tmp == '(') v.push_back(s[0]);
			else
			{
				if (v.size() == 0)
				{
					isVPS = 0;
					break;
				}
				else v.pop_back();
			}
		}
		if (!v.empty()) isVPS = 0;
		if (isVPS == 1) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}