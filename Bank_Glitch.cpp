#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        
        long long cnt = b;
        long long t = a / x;
        cnt += t * y;
        cnt += (a - t * x);
        
        cout << cnt << endl;
    }
    
    return 0;
}