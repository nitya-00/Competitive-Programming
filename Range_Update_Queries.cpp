#include <iostream>
#include <vector>
using namespace std;

#define ll long long

vector<ll> segT;
vector<ll> a;

void build(int node, int st, int end) {
    if (st == end) {
        segT[node] = 0;
        return;
    }

    int mid = (st + end) / 2;

    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, end);

   // segT[node] = segT[2 * node] + segT[2 * node + 1];
    //segT[node]=a[st]
}

void update(int node, int st, int end, int l, int r, ll val) {
    // No overlap
    if (end < l || st > r) return;

    // Complete overlap
    if (st >= l && end <= r) {
        segT[node] += val;
        return;
    }

    int mid = (st + end) / 2;

    update(2 * node, st, mid, l, r, val);
    update(2 * node + 1, mid + 1, end, l, r, val);
}

ll query(int node, int st, int end, int idx) {
    if (st == end) {
        return segT[node];
    }

    int mid = (st + end) / 2;

    if (idx <= mid)
        return segT[node] + query(2 * node, st, mid, idx);
    else
        return segT[node] + query(2 * node + 1, mid + 1, end, idx);
}


void solve() {
    int n, q;
    cin >> n >> q;

    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    segT.resize(4 * n, 0);

    build(1, 0, n - 1);

    while (q--) {
        int type;
        cin>>type ;
        if(type==1){
            int a , b ;
            ll c;
            cin>>a>>b>>c;
            a--  ; b--;
            //query(1,0,n-1,a-1,b-1);
            update(1,0,n-1,a , b, c);
        }
        else{
            int k;
            cin>>k;
            k--;
            cout<<a[k]+query(1, 0 , n-1 , k)<<endl;
        }
    }
}

int main() {
    solve();
    return 0;
}