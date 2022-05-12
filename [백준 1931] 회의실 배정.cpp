/*#include <iostream>
#include <algorithm>
using namespace std;

struct meeting {
	int start, end;
};
meeting arr[100001];

bool compare(const meeting& a, const meeting& b) {
	if (a.end != b.end) return a.end < b.end;
	else return a.start < b.start;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].start >> arr[i].end;
	}
	sort(arr, arr+n, compare);

	int ans = 0;
	int endTime = 0;
	for (int i = 0; i < n; ++i) {
		if (endTime <= arr[i].start) {
			ans++;
			endTime = arr[i].end;
		}
	}

	cout << ans << '\n';
	return 0;
}*/