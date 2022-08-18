#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 100000;
int arr[MAX + 1];
int minTree[MAX * 4 + 1];
int maxTree[MAX * 4 + 1];

int initMinTree(int start, int end, int node) {
	if (start == end) return minTree[node] = arr[start];
	int mid = (start + end) / 2;
	return minTree[node] = min(initMinTree(start, mid, node * 2), initMinTree(mid + 1, end, node * 2 + 1));
}

int initMaxTree(int start, int end, int node) {
	if (start == end) return maxTree[node] = arr[start];
	int mid = (start + end) / 2;
	return maxTree[node] = max(initMaxTree(start, mid, node * 2), initMaxTree(mid + 1, end, node * 2 + 1));
}

int minQuery(int start, int end, int node, int left, int right) {
	if (start > right || end < left) return 1000000001;
	if (left <= start && end <= right) return minTree[node];

	int mid = (start + end) / 2;
	return min(minQuery(start, mid, node * 2, left, right), minQuery(mid + 1, end, node * 2 + 1, left, right));
}

int maxQuery(int start, int end, int node, int left, int right) {
	if (start > right || end < left) return -1;
	if (left <= start && end <= right) return maxTree[node];

	int mid = (start + end) / 2;
	return max(maxQuery(start, mid, node * 2, left, right), maxQuery(mid + 1, end, node * 2 + 1, left, right));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	initMaxTree(1, n, 1); initMinTree(1, n, 1);

	while (m--) {
		int left, right; cin >> left >> right;
		cout << minQuery(1, n, 1, left, right) << ' ' << maxQuery(1, n, 1, left, right) << '\n';
	}

	return 0;
}