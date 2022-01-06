#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// 100 미만인 수는 모두 한수.
	int n, ans = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
		{
			ans++;
			continue;
		}
		int a, b, c;
		a = i / 100;
		b = (i - a * 100) / 10;
		c = i % 10;
		if (a - b == b - c) ans++;
	}

	cout << ans << endl;
	return 0;
}