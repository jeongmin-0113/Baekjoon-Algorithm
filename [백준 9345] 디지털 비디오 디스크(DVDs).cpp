#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using pii = pair<int, int>;

int arr[100000];

inline int mid(int s, int e) { return s + (e - s) / 2; }

pii init(vector<pii>& tree, int node, int start, int end)
{
    if (start == end) return tree[node] = { start, end };
    int m = mid(start, end);

    init(tree, node * 2, start, m);
    init(tree, node * 2 + 1, m + 1, end);

    tree[node].first = min(tree[node * 2].first, tree[node * 2 + 1].first);
    tree[node].second = max(tree[node * 2].second, tree[node * 2 + 1].second);
    return tree[node];
}

pii update(vector<pii>& tree, int node, int start, int end, int idx)
{
    if (idx < start || idx > end) return tree[node];

    if (start == end)
    {
        tree[node].first = tree[node].second = arr[idx];
        return tree[node];
    }

    int m = mid(start, end);

    pii l = update(tree, node * 2, start, m, idx);
    pii r = update(tree, node * 2 + 1, m + 1, end, idx);

    tree[node].first = min(l.first, r.first);
    tree[node].second = max(l.second, r.second);

    return tree[node];
}

pii query(vector<pii>& tree, int node, int start, int end, int l, int r)
{
    if (start > r || end < l) return { 1e9, -1e9 };
    if (l <= start && end <= r) return tree[node];

    int m = mid(start, end);
    pii l_node = query(tree, node * 2, start, m, l, r);
    pii r_node = query(tree, node * 2 + 1, m + 1, end, l, r);

    pii ret;
    ret.first = min(l_node.first, r_node.first);
    ret.second = max(l_node.second, r_node.second);
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;  cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pii> segtree(n * 4);
        init(segtree, 1, 0, n - 1);

        for (int i = 0; i < n; ++i) arr[i] = i;

        while (k--)
        {
            int q, a, b;
            cin >> q >> a >> b;

            if (!q)
            {
                if (a == b) continue;

                swap(arr[a], arr[b]);
                update(segtree, 1, 0, n - 1, a);
                update(segtree, 1, 0, n - 1, b);
            }
            else
            {
                pii res = query(segtree, 1, 0, n - 1, a, b);
                if (res.first == a && res.second == b)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }
}