#include <iostream>
using namespace std;

typedef long long ll;
const int MAX = 1000001;
int n;
ll arr[MAX];
ll tree[MAX * 4];

ll query(int node, int start, int end, int k)
{
    if (start == end) return end;

    int mid = (start + end) / 2;
    if (tree[node * 2] >= k)
        return query(node * 2, start, mid, k);
    else
        return query(node * 2 + 1, mid + 1, end, k - tree[node * 2]);
}

void update(int node, int start, int end, int idx, ll value)
{
    if (idx < start || idx > end) return;
    if (start == end)
    {
        tree[node] = value;
        return;
    }

    int mid = (start + end) / 2;
    update(node * 2, start, mid, idx, value);
    update(node * 2 + 1, mid + 1, end, idx, value);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    ll a, b, c;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            int k = query(1, 1, MAX, b);
            cout << k << '\n';
            arr[k]--;
            update(1, 1, MAX, k, arr[k]);
        }
        else
        {
            cin >> b >> c;
            arr[b] += c;
            update(1, 1, MAX, b, arr[b]);
        }
    }

    return 0;
}