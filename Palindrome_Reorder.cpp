#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    if(s.reverse()==s){
        return true;
    }
    else return false;
}
void solve(){
    string s;
    cin>>s;
    if(isPalindrome)cout<<s;
    string newst;
    map<char , int>freq(26);
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(freq[s[i]]%2==0){
            newst.append(s[i]);
        }
    }

}


int main() {
       solve();
}
