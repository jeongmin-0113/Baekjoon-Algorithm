#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int x, y; cin >> x >> y;
    int n; cin >> n;

    vector<int> cut_x;
    vector<int> cut_y;

    cut_y.push_back(0);
    cut_x.push_back(0);
    while (n--) {
        int a,b; cin >> a >> b;
        if (a == 0) {
            // 가로선 -> y를 나눔
            cut_y.push_back(b);
        }
        if (a == 1) {
            // 세로선 -> x를 나눔
            cut_x.push_back(b);
        }
    }
    cut_y.push_back(y);
    cut_x.push_back(x);

    sort(cut_x.begin(), cut_x.end());
    sort(cut_y.begin(), cut_y.end());

    int ans = 0;
    for (int i=1;i<cut_x.size();i++) {
        int width = cut_x[i-1] - cut_x[i];
        for (int j=1;j<cut_y.size();j++) {
            int length = cut_y[j-1] - cut_y[j];
            if (ans < width*length) ans = width*length;
        }
    }

    cout << ans << '\n';
}