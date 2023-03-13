#include <iostream>
using namespace std;

int arr[1025][1025];
int sum[1025][1025];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M; cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        int prev = 0;
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
            prev += arr[i][j];
            sum[i][j] = prev;
        }
    }

    int x1, y1, x2, y2;
    while (M--) {
        int ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        int i = x1;
        while (i <= x2) {
            ans += sum[i][y2] - sum[i][y1 - 1];
            i++;
        }
        cout << ans << '\n';
    }

    return 0;
}