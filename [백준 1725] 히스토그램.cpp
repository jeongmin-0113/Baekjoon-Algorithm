#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int n, ans;
int arr[100002];
stack <int> s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	s.push(0);
	for (int i = 1; i <= n+1; ++i) {
		while (!s.empty() && arr[s.top()] > arr[i]) {
			int m = s.top();
			s.pop();
			ans = max(ans, arr[m] * (i - s.top() - 1));
		}
		s.push(i);
	}
	cout << ans << '\n';

	return 0; 
}