#include <iostream>
#include <vector>
#include <unordered_set>    
using namespace std;

 
string solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 
    int T = *max_element(a.begin(), a.end());

        unordered_set<int> st;

        for(int i = 0; i < n; i++){
            if(a[i] == T) continue;

            int x = T - a[i];

            if(x <= 0 || st.count(x)){
                return "No";
            }

            st.insert(x);
        }

        return "Yes";
    }

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
}

