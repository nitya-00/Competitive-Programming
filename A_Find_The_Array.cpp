#include <bits/stdc++.h>
using namespace std;
void min_step(int n){
    int sum = 0, count = 0, num = 1;

    while (sum < n) {
        sum += num;
        count++;
        num += 2;  
    }

    cout << count ;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
       min_step(n);
       cout<<endl;
    }
}
