#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
   long long half=0;
    long long sum=n *(n+1)/2;
    vector<int> set1, set2;
    long long target = sum / 2;
    if(sum%2!=0){
        cout<<"NO";
        return;
    }
    
    else{
        for (int i = n; i >= 1; i--) {
            if (target >= i) {
                set1.push_back(i);
                target -= i;
            } else {
                set2.push_back(i);
            }
        }
    }
    cout << "YES\n";
    cout << set1.size() << "\n";
    for (int x : set1) cout << x << " ";
    cout << "\n" << set2.size() << "\n";
    for (int x : set2) cout << x << " ";
    cout << "\n";

}


int main() {
   solve();
}
