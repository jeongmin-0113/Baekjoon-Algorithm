#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> ans;
    for (int i=0;i<10;++i)
    {
        int tmp;
        cin >> tmp;
        tmp = tmp%42;
        ans.insert(tmp);
    }
    int a = ans.size();
    cout << a << '\n';

    return 0;
}
