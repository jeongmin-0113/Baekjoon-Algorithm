#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void success()
{
	cout << "권병장님, 중대장님이 찾으십니다" << endl;
}
void failure()
{
	cout << "엄마 나 전역 늦어질 것 같아" << endl;
} 

int main()
{
	int n;
	cin >> n;
	vector <pair<int, int>> location;

	for (int i = 0; i < n; i++)
	{
		int k = 0;
		cin >> k;
		location.push_back(make_pair(k, k));
	}
	if (n != 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			int r = 0;
			cin >> r;
			location[i].second += r;
		}
	}
	else { success(); return 0; }

	sort(location.begin(), location.end());
	location.resize(unique(location.begin(), location.end()) - location.begin());

	for (int i = 1; i < (int)location.size() - 1 ; i++)
	{
		if (((int)location[i-1].second > (int)location[i].second) && ((int)location[i-1].first < (int)location[i].first))
		{
			location.erase(location.begin() + i);
			i--;
		}
	}

	for (int i = 0; i < (int)location.size() - 1; i++)
	{
		if ((int)location[i].second < (int)location[i + 1].first)
		{
			failure();
			return 0;
		}
	}
	success();

	return 0;
}