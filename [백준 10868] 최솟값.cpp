#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int arr[MAX + 1];
int tree[MAX * 4 + 1];

int init(int start, int end, int node) {
	if (start == end) return tree[node] = arr[start];
	int mid = (start + end) / 2;
	return tree[node] = min(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

int query(int start, int end, int node, int left, int right) {
	if (start > right || left > end) return 1000000001;
	if (left <= start && end <= right) return tree[node];

	int mid = (start + end) / 2;
	return min(query(start, mid, node * 2, left, right), query(mid + 1, end, node * 2 + 1, left, right));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	init(1, n, 1);

	while (m--) {
		int left, right;
		cin >> left >> right;
		cout << query(1, n, 1, left, right) << '\n';
	}

	return 0;
}