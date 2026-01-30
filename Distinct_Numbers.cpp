#include <bits/stdc++.h>
using namespace std;
int solve(){
    long long n;
    cin>>n;
    vector<long long>sett(n);
    for(long long  i=0;i<n;i++)cin>>sett[i];
    unordered_set<long long>fre;
    for(long long  i=0;i<n;i++){fre.insert (sett[i]);}

    return fre.size();
}


int main() {
    
       cout <<solve() << endl;
}