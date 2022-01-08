#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s;
	vector <string> v;
	cin >> s;

	for (int i = 0; i < (int)s.size(); ++i)
	{
		v.push_back(s);
		s.erase(s.begin() + i);
		--i;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < (int)v.size(); ++i)
	{
		cout << v[i] << endl;
	}
}