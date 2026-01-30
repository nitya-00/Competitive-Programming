#include <bits/stdc++.h>
using namespace std;
void stringcount(int n , int k ,string s){
    bool swapping=false;
    if (k == 0) {
        cout << (s[0] < s[n-1] ? "YES" : "NO") << endl;
        return;
    }
    int min_id=0;
        while(k>0){
                for (int i = 1; i < n; i++) {
                    if (s[i] < s[min_id]) {
                        min_id = i; 
                    }
                }
            
                if (min_id != 0) {
                    swap(s[0], s[min_id]); 
                }
            k--;
        }
        cout<< (swapping?"YES":"NO")<<endl;
        return ;
}

int main() {
	int t;
    cin>> t;
    string s;
    while(t--){
        int n , k;
        cin>> n >>k;
        cin>>s;
        stringcount(n , k , s);
        
    }
    return 0;
}