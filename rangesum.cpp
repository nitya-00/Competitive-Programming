#include <iostream>
#include <vector>

using namespace std;

#define ll long long

struct Node {
    ll sum = 0;
    ll c1 = 0, c2 = 0; // lazy: A[i] = c1*i + c2
    bool lazy = false;
};

vector<Node> seg;
vector<ll> a;

ll getSumIndex(int l, int r) {
    // sum of i from l to r
    return (ll)(r - l + 1) * (l + r) / 2;
}

void apply(int node, int l, int r, ll c1, ll c2) {
    ll len = r - l + 1;

    seg[node].sum = c1 * getSumIndex(l, r) + c2 * len;

    seg[node].c1 = c1;
    seg[node].c2 = c2;
    seg[node].lazy = true;
}

void push(int node, int l, int r) {
    if (!seg[node].lazy) return;

    int mid = (l + r) / 2;

    apply(2 * node, l, mid, seg[node].c1, seg[node].c2);
    apply(2 * node + 1, mid + 1, r, seg[node].c1, seg[node].c2);

    seg[node].lazy = false;
}

void build(int node, int l, int r) {
    if (l == r) {
        seg[node].sum = a[l];
        return;
    }

    int mid = (l + r) / 2;
    build(2 * node, l, mid);
    build(2 * node + 1, mid + 1, r);

    seg[node].sum = seg[2 * node].sum + seg[2 * node + 1].sum;
}

void update(int node, int l, int r, int ql, int qr, ll c1, ll c2) {
    if (r < ql || l > qr) return;

    if (l >= ql && r <= qr) {
        apply(node, l, r, c1, c2);
        return;
    }

    push(node, l, r);

    int mid = (l + r) / 2;

    update(2 * node, l, mid, ql, qr, c1, c2);
    update(2 * node + 1, mid + 1, r, ql, qr, c1, c2);

    seg[node].sum = seg[2 * node].sum + seg[2 * node + 1].sum;
}

ll query(int node, int l, int r, int ql, int qr) {
    if (r < ql || l > qr) return 0;

    if (l >= ql && r <= qr) return seg[node].sum;

    push(node, l, r);

    int mid = (l + r) / 2;

    return query(2 * node, l, mid, ql, qr) +
           query(2 * node + 1, mid + 1, r, ql, qr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    a.resize(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    seg.resize(4 * n);

    build(1, 1, n);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int l, r;
            cin >> l >> r;

            // get A[l]
            ll val = query(1, 1, n, l, l);

            ll c1 = val;
            ll c2 = -val * (l - 1);

            update(1, 1, n, l, r, c1, c2);
        }
        else {
            int l, r;
            cin >> l >> r;

            cout << query(1, 1, n, l, r) << "\n";
        }
    }

    return 0;
}