#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// �Էº�
	int n;
	cin >> n;
	vector <int> num_list;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		num_list.push_back(tmp);
	}

	// �����
	sort(num_list.begin(), num_list.end());
	int ans = 1;

	for (int i = 0; i < num_list.size(); ++i)
	{
		if (num_list[i] > ans) break;
		ans += num_list[i];
	}

	// ��º�
	cout << ans << endl;
	return 0;
}