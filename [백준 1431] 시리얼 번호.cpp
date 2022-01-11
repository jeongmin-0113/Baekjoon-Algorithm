#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool my_compare(const string &a, const string &b)
{
	if (a.size() != b.size()) return a.size() < b.size();
	else
	{
		int a_num = 0, b_num = 0;
		for (int i = 0; i < a.size(); ++i)
		{
			if (isdigit(a[i])) a_num += a[i] - '0';
		}
		for (int i = 0; i < b.size(); ++i)
		{
			if (isdigit(b[i])) b_num += b[i] - '0';
		}

		if (a_num != b_num) return a_num < b_num;
		else
		{
			return a < b;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector <string> serial_num;

	for (int i = 0; i < n; ++i)
	{
		string tmp;
		cin >> tmp;
		serial_num.push_back(tmp);
	}
	sort(serial_num.begin(), serial_num.end(), my_compare);

	for (int i = 0; i < n; ++i)
		cout << serial_num[i] << endl;
}