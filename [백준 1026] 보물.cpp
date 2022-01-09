#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	vector <int> a;
	vector <int> b;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		b.push_back(tmp);
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < n; ++i)
	{
		int max = *max_element(b.begin(), b.end());
		b.erase(max_element(b.begin(), b.end()));
		ans += a[i] * max;
	}

	cout << ans << endl;
	return 0;
}