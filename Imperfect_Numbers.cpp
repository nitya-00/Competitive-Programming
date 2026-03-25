
#include <iostream>
using namespace std;

 bool isImperfect(int x){
        return (x % 2 == 0) ^ (x % 5 == 0);
    }

int solve(){
    int n;
    cin >> n;
    for(int d = 0; d <= 100; d++){  
        if(n - d >= 1 && isImperfect(n - d)) return d;
        if(isImperfect(n + d)) return d;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
}
