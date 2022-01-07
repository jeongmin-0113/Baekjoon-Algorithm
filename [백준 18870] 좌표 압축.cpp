#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> X;
	vector<int> arr;

	for (int i = 0; i < N; ++i)
	{
		int tmp;
		cin >> tmp;
		X.push_back(tmp);
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());
	arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
	
	for (int x : X)
	{
		cout << lower_bound(arr.begin(), arr.end(), x) - arr.begin() << " ";
	}
	return 0;
}