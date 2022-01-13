#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	vector <int> num_list;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		num_list.push_back(tmp);
	}

	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		int tmp = 0;
		tmp += num_list.front();
		num_list.erase(num_list.begin());

		if (tmp == m)
		{
			ans++;
			continue;
		}
		
		for (int j = 0; j < num_list.size(); ++j)
		{
			tmp += num_list[j];

			if (tmp == m)
			{
				ans++;
				break;
			}
			else if (tmp > m) break;
		}
	}

	cout << ans << endl;
	return 0;
}