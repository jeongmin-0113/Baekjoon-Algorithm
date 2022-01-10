#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	vector <int> tri;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		tri.push_back(tmp);
	}
	sort(tri.begin(), tri.end());

	while (tri.size() >= 3)
	{
		int max = *max_element(tri.begin(), tri.end());
		tri.erase(max_element(tri.begin(), tri.end()));

		int num1 = *max_element(tri.begin(), tri.end());
		int num2 = *max_element(tri.begin(), tri.end() - 1);

		if (num1 + num2 > max)
		{
			cout << max + num1 + num2 << endl;
			return 0;
		}
		else continue;
	}
	cout << -1 << endl;
	return 0;
}