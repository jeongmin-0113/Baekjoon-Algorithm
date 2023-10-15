#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

queue<char> ans;
int req[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	stack<int> s;
	queue<int> ready;

	for (int i = 1; i <= n; ++i) {
		ready.push(i);
	}

	for (int i = 0; i < n; ++i) {
		cin >> req[i];
	}

	int idx = 0;
	while (!ready.empty()) {
		if (s.empty()) {
			s.push(ready.front());
			ready.pop();
			ans.push('+');
		}
		else if (s.top() != req[idx]) {
			s.push(ready.front());
			ready.pop();
			ans.push('+');
		}
		else if (s.top() == req[idx]) {
			s.pop();
			ans.push('-');
			idx++;
		}
	}

	bool cannotMake = 0;
	while (!s.empty())
	{
		if (s.top() != req[idx]) {
			cannotMake = 1;
			break;
		}
		else {
			s.pop();
			ans.push('-');
			idx++;
		}
	}

	if (cannotMake) cout << "NO" << '\n';
	else {
		while (!ans.empty()) {
			cout << ans.front() << '\n';
			ans.pop();
		}
	}
}
