#include <iostream>
#include <vector>
using namespace std;

void setting(vector<long long>& arr, vector<long long>& tree, int node, int start, int end) {
	if (start == end) { tree[node] = arr[start]; return; }
	tree[node] = 0;
	int mid = (start + end) / 2;
	setting(arr, tree, node * 2, start, mid);
	setting(arr, tree, node * 2 + 1, mid + 1, end);
}

void update(vector<long long>& tree, int node, int start, int end, int left, int right, long long k) {
	if (start > right || end < left) return;
	if (left <= start && end <= right) { tree[node] += k; return; }

	int mid = (start + end) / 2;
	update(tree, node * 2, start, mid, left, right, k);
	update(tree, node * 2 + 1, mid + 1, end, left, right, k);
}

long long getValue(vector<long long>& tree, int node, int start, int end, int index, long long ans) {
	if (index<start || index>end) return 0;

	ans += tree[node];
	if (start == end) return ans;

	int mid = (start + end) / 2;
	return getValue(tree, node * 2, start, mid, index, ans) + getValue(tree, node * 2 + 1, mid + 1, end, index, ans);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	vector <long long> arr(N+1);
	vector <long long> tree(N * 4);

	for (int i = 1; i <= N; ++i) cin >> arr[i];
	setting(arr, tree, 1, 1, N);

	int M; cin >> M;
	while (M--) {
		int q; cin >> q;
		if (q == 1) {
			int i, j; long long k; cin >> i >> j >> k;
			update(tree, 1, 1, N, i, j, k);
		}
		else if (q == 2) {
			int x; cin >> x;
			cout << getValue(tree, 1, 1, N, x, 0) << '\n';
		}
	}

	return 0;
}