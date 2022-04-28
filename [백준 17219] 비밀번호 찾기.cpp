#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	map <string, string> sites;
	for (int i = 0; i < n; ++i)
	{
		string s, p;
		cin >> s >> p;
		sites[s] = p;
	}

	for (int i = 0; i < m; ++i)
	{
		string toSearch;
		cin >> toSearch;
		cout << sites[toSearch] << '\n';
	}

	return 0;
}