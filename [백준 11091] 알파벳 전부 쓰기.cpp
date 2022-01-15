#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
	// 입력부
	int n;
	cin >> n;
	cin.ignore();
	
	// 실행부
	for (int i = 0; i < n; ++i)
	{
		int ans[26] = { 0 };
		string missing_alpha = "";
		string tmp;
		getline(cin, tmp);

		transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		sort(tmp.begin(), tmp.end());
		tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

		for (int j = 0; j < (int)tmp.size(); ++j)
		{
			if (isalpha(tmp[j]))
			{
				int k = (int)tmp[j] - 97;
				ans[k] = 1;
			}
		}

		int ispangram = 1;
		for (int j = 0; j < 26; ++j)
		{
			if (ans[j] == 0)
			{
				ispangram = 0;
				missing_alpha.push_back((char)(j + 97));
			}
		}

		// 출력부
		if (ispangram == 1) cout << "pangram" << endl;
		else cout << "missing " << missing_alpha << endl;
	}
}