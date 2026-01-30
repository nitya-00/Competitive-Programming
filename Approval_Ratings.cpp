#include <bits/stdc++.h>
using namespace std;
int solve(){
   vector<int>res(5);
   int sum=0;
   for(int i=0;i<5;i++){
        cin>>res[i];
        sum+=res[i];
     }
     int avg=sum/=5;
     if(avg<7){
        int needs=35-sum*5;
        int c= (needs+9)/10;
        return c*100;
     }
     else{
        return 0;
     }  

      
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}