#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int check_palindrome(const string a, const string b)
{
	string check = a + b;
	int size = check.size();
	int backward = 0, frontward = 0;

	for (int i = 0; i < size / 2; ++i)
	{
		backward = (int)check[size - 1 - i] - 96;
		frontward = (int)check[i] - 96;
		if (frontward != backward) return 0;
	}

	return 1;
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int k;
		cin >> k;
		cin.ignore();
		vector <string> test_case;
		
		for (int j = 0; j < k; ++j)
		{
			string tmp;
			getline(cin, tmp);
			test_case.push_back(tmp);
		}

		int is_palindrome = 0;
		for (int n = 0; n < k; ++n)
		{
			for (int m = 0; m < k; ++m)
			{
				if (n == m) continue;
				if (check_palindrome(test_case[n], test_case[m]))
				{
					cout << test_case[n] + test_case[m] << endl;
					is_palindrome = 1;
					goto exit;
				}
			}
		}

		exit :
		if (!is_palindrome) cout << 0 << endl;
	}

	return 0;
}