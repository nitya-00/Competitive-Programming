#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void solve() {
    int n;
    cin>> n ;
    string s;
    cin>> s ;
    vector<int> ones, zeros;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones.push_back(i + 1);
            else zeros.push_back(i + 1);
        }

        
       if (zeros.size() % 2 == 1) {
            cout << zeros.size() << "\n";
            for (int x : zeros) cout << x << " ";
            cout << "\n";
        }
        else if (ones.size() % 2 == 0) {
            cout << ones.size() << "\n";
            for (int x : ones) cout << x << " ";
            if (!ones.empty()) cout << "\n";
           // else cout << "\n";
        }
        else {
            cout << -1 << "\n";
        }

   
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}
