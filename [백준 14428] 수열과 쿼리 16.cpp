#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int n, m;
int arr[MAX + 1];
int tree[MAX * 4 + 1];

int minIndex(int x, int y) {
	if (x == -1) return y;
	if (y == -1) return x;
	if (arr[x] == arr[y]) return x < y ? x : y;
	else return arr[x] < arr[y] ? x : y;
}

int init(int start, int end, int node) {
	if (start == end) return tree[node] = start;
	int mid = (start + end) / 2;
	return tree[node] = minIndex(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

int update(int start, int end, int node, int index) {
	if (start > index || end < index) return tree[node];
	if (start == end) return tree[node];
	int mid = (start + end) / 2;
	return tree[node] = minIndex(update(start, mid, node * 2, index), update(mid + 1, end, node * 2 + 1, index));
}

int query(int start, int end, int node, int left, int right) {
	if (start > right || end < left) return -1;
	if (left <= start && end <= right) return tree[node];

	int mid = (start + end) / 2;
	return minIndex(query(start, mid, node * 2, left, right), query(mid + 1, end, node * 2 + 1, left, right));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	init(1, n, 1);

	cin >> m;
	while (m--) {
		int Q; cin >> Q;
		if (Q == 1) {
			int i, v; cin >> i >> v;
			arr[i] = v;
			update(1, n, 1, i);
		}
		else {
			int i, j; cin >> i >> j;
			cout << query(1, n, 1, i, j) << '\n';
		}
	}

	return 0;
}