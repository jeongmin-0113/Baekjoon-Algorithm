#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	stack <int> s;
	cin >> n;
	while (n > 0)
	{
		int x; char order[6];
		cin >> order;
		if (order[0] == 'p')
		{
			if (order[1] == 'u')
			{
				cin >> x;
				s.push(x);
			}
			else if (order[1] == 'o')
			{
				if (s.size() > 0)
				{
					cout << s.top() << '\n';
					s.pop();
				}
				else cout << -1 << '\n';
			}
		}
		else if (order[0] == 's') cout << s.size() << '\n';
		else if (order[0] == 'e') cout << s.empty() << '\n';
		else if (order[0] == 't')
		{
			if (s.size() > 0) cout << s.top() << '\n';
			else cout << -1 << '\n';
		}
		n--;
	}
	
	return 0;
}