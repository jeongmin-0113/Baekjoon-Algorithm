#include <iostream>
#include <algorithm>
using namespace std;

int sqr[101][101];
int ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int cnt = 4;
	while (cnt--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		for (int i = b; i < d; i++)
		{
			for (int j = a; j < c; j++) {
				if (sqr[i][j] == 0)
				{
					sqr[i][j] = 1;
					ans++;
				}
			}
		}
	}

	cout << ans << '\n';
}
