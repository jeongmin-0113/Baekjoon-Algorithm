#include <iostream>
using namespace std;

int main() {
    /* input */
    int h,w,n,m; // 행, 열, 세로공백, 가로공백
    cin >> h >> w >> n >> m;

    /* process */
    int a,b;

    // 세로 구하기
    a = h / (n+1);
    if (h % (n+1) > 0) a++;

    // 가로 구하기
    b = w / (m+1);
    if (w % (m+1) > 0) b++;

    /* output */
    int ans = a*b;
    cout << ans;
}