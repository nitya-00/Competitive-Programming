#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(){
    int n , x;
    cin >> n >> x;

    int sum=0;
    for(int i=n;i>x;i--){
        sum+=i;
        //if(i==x)break;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}