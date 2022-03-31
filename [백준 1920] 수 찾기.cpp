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
			// ��� ���� ���� ���� ���� ��� ans=1 ������ְ� ���� ����������
			if (numLst[mid] == tmp) {
				ans = 1;
				break;
			}
			// ��� ���� ���� ������ ���� ��� ������� ū �ε����� �񱳰��� ���� �� ������ start=mid+1�ϰ� �ѱ��
			else if (numLst[mid] < tmp) {
				high = mid + 1;
			}
			// ��� ���� ���� ������ ū ��� ������� ���� �ε����� �񱳰��� ���� �� ������ end=mid-1�ϰ� �ѱ��
			else if (numLst[mid] > tmp) {
				low = mid - 1;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}