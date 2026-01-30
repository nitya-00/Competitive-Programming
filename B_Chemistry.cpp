#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}
void solve(){
    int n , k;
    cin>> n >> k;
    string s;
    cin>>s;
    int countt=0;
    map<char , int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++; 
             
         }
         for(int i=0;i<freq.size();i++){
            if(freq[i]%2!=0)countt++; 
               
         }
   cout<< ((countt<=k+1)?"YES" : "NO"); 
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve() ;
       cout  << endl;
    }
}
