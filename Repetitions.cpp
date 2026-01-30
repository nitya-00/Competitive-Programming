#include <bits/stdc++.h>
using namespace std;
int solve(){
    string n;
    cin>>n;
    int count=1;
    int maxi=1;
    for(int i=1;i<n.size();i++){
        if(n[i]==n[i-1])count++;
        else {
            maxi=max(maxi,count);
            count=1;
        }
    }
    maxi=max(maxi , count);
    return maxi;
}


int main() {
   cout<< solve()<<endl;
}

