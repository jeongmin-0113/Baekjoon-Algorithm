#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// �Էº�
	int n, k;
	cin >> n;
	vector <int> top;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		top.push_back(tmp);
	}
	cin >> k;

	// �����
	int a = 2;
	while (true)
	{
		for (int i = 0; i < n / a; ++i)
		{
			sort(top.begin() + a * i, top.begin() + a * i + a);
		}
		a = a * 2;
		if (a > n / k) break;
	}

	// ��º�
	for (int i = 0; i < n; ++i) cout << top[i] << " ";
	return 0;
}