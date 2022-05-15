#include <iostream>
#include <algorithm>
using namespace std;

long long length[100001];
long long cost[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n-1; ++i) cin >> length[i];
	for (int i = 0; i < n; ++i) cin >> cost[i];
	
	long long minimum = cost[0];
	long long ans = 0;
	for (int i = 0; i < n-1; ++i) {
		minimum = min(minimum, cost[i]);
		ans += minimum * length[i];
	}
	cout << ans << '\n';

	return 0;
}