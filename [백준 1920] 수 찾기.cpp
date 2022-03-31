#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	vector <int> numLst;
	vector <int> cprLst;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		numLst.push_back(tmp);
	}
	sort(numLst.begin(), numLst.end());

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int tmp;
		cin >> tmp;
		
		int ans = 0;
		int high = 0, low = n-1, mid;

		while (low >= high) {
			mid = (high + low) / 2;
			// 가운데 값이 비교할 값과 같은 경우 ans=1 만들어주고 루프 빠져나오기
			if (numLst[mid] == tmp) {
				ans = 1;
				break;
			}
			// 가운데 값이 비교할 값보다 작은 경우 가운데보다 큰 인덱스에 비교값이 있을 수 있으니 start=mid+1하고 넘기기
			else if (numLst[mid] < tmp) {
				high = mid + 1;
			}
			// 가운데 값이 비교할 값보다 큰 경우 가운데보다 작은 인덱스에 비교값이 있을 수 있으니 end=mid-1하고 넘기기
			else if (numLst[mid] > tmp) {
				low = mid - 1;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}