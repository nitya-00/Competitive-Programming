#include <bits/stdc++.h>
using namespace std;
int solve(){
   long long n;
   cin>>n;
   long long count=0;
   while(n>1){
        if(n%6==0){
            count++;
            n/=6;
        }
        else if(n%2==1){
            count++;
            n*=2;
        }
        else{
            return -1;
            }
   }
  return count;  
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}