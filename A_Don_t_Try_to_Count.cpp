#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n , m ;
    cin>> n>> m;
    string x , s;
    cin>>x >>s;
    int count=0;
    string temp=x;
   while(temp.find(s)==string::npos){
        temp+=temp;
        count++;
        if (temp.size() > s.size() * 15) return -1;
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
