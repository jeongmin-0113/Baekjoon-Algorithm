#include <iostream>
#include <vector>
using namespace std;

vector <int> v;
int n=1;
int start, end;

void func() {
    int cnt=0;
    while (true) {
        if (v.size() == 1000) break;
        if (cnt==n) {n++; cnt=0;}
        else {
            v.push_back(n);
            cnt++;
        }
    }
}

int main()
{
    int start, end;
    cin >> start >> end;
    
    func();
    
    int ans = 0;
    for (int i=start-1;i<end;++i) ans += v[i];
    
    cout << ans;
    return 0;
}
