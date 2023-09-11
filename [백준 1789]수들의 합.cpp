#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long n; cin >> n;
    long long sum = 0;
    int ans = 0;

    long long i = 1;
    while (sum < n) {
        sum += i;
        i++;
        ans++;
    }

    if (sum > n) ans = ans - 1;
    cout << ans << '\n';
}