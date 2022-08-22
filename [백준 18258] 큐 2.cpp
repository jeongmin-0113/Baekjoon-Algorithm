#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	queue <int> q;
	int n; cin >> n;
	while (n--)
	{
		string tmp; cin >> tmp;
		if (tmp == "push") 
		{
			int x; cin >> x;
			q.push(x);
		}
		else if (tmp == "pop")
		{
			if (q.empty()) cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (tmp == "size") 
		{
			cout << q.size() << '\n';
		}
		else if (tmp == "empty") 
		{
			cout << (int)q.empty() << '\n';
		}
		else if (tmp == "front") 
		{
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		else if (tmp == "back")
		{
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}
}
