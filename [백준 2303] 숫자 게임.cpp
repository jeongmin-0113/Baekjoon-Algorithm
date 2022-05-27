#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) return a.first > b.first;
    else return a.second > b.second;
}
int main()
{
    vector <pair<int, int>> v;
    int n; cin >> n;
    for(int i=0;i<n;++i) {
        int arr[5];
        for (int j=0;j<5;++j) cin>>arr[j];
        int ans=0;
        for(int a=0;a<3;++a) {
            for (int b=a+1;b<4;++b) {
                for(int c=b+1;c<5;++c) {
                    int sum=(arr[a]+arr[b]+arr[c])%10;
                    ans = max(ans, sum);
                }
            }
        }
        v.push_back(make_pair(ans, i+1));
    }
    sort(v.begin(),v.end(),compare);
    
    int ret = v[0].second;
    cout << ret << '\n';

    return 0;
}
