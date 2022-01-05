#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	while (1)
	{
		string input;
		stack<int> ans;
		getline(cin, input);

		if (input == ".") break;

		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == '[') ans.push(1);
			else if (input[i] == '(') ans.push(2);
			else if (input[i] == ')')
			{
				if (ans.size() == 0) {
					ans.push(0);
					break;
				}
				if (ans.top() != 2) break;
				else ans.pop();
			}
			else if (input[i] == ']')
			{
				if (ans.size() == 0) {
					ans.push(0);
					break;
				}
				if (ans.top() != 1) break;
				else ans.pop();
			}
		}
		if (ans.empty()) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	
	return 0;
}