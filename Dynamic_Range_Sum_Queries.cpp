#include <iostream>
#include <vector>
using namespace std;

#define ll long long

vector<ll> segT;
vector<ll> a;

void build(int node, int st, int end) {
    if (st == end) {
        segT[node] = a[st];
        return;
    }

    int mid = (st + end) / 2;

    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, end);

    segT[node] = segT[2 * node] + segT[2 * node + 1];
}

ll query(int node, int st, int end, int l, int r) {
    // No overlap
    if (end < l || st > r) return 0;

    // Complete overlap
    if (st >= l && end <= r) return segT[node];

    int mid = (st + end) / 2;

    ll left = query(2 * node, st, mid, l, r);
    ll right = query(2 * node + 1, mid + 1, end, l, r);

    return left + right;
}

void update(int node, int st, int end, int idx, ll val) {
    if (st == end) {
        segT[node] = val;
        return;
    }

    int mid = (st + end) / 2;

    if (idx <= mid)
        update(2 * node, st, mid, idx, val);
    else
        update(2 * node + 1, mid + 1, end, idx, val);

    segT[node] = segT[2 * node] + segT[2 * node + 1];
}

void solve() {
    int n, q;
    cin >> n >> q;

    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    segT.resize(4 * n);

    build(1, 0, n - 1);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int k;
            ll u;
            cin >> k >> u;
            k--; // 0-based

            update(1, 0, n - 1, k, u);
        }
        else {
            int l, r;
            cin >> l >> r;
            l--, r--; // 0-based

            cout << query(1, 0, n - 1, l, r) << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}