#include <iostream>
using namespace std;

int n;
int a, b;
int arr[3] = {1, 0, 0};
void func(int a, int b)
{
	if (arr[a])
	{
		arr[a] = 0;
		arr[b] = 1;
	}
	else if (arr[b])
	{
		arr[b] = 0;
		arr[a] = 1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		a--; b--;
		func(a, b);
	}
	
	for (int i = 0; i < 3; ++i)
	{
		if (arr[i] == 1) cout << i + 1 << '\n';
	}
	return 0;
}