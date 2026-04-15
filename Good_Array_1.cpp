#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq;
    unordered_map<int, int> last;

    int changes = 0;

    for(int i = 0; i < n; i++){
        freq[a[i]]++;

        // case 1: more than 2 occurrences
        if(freq[a[i]] > 2){
            changes++;
            freq[a[i]]--;
            continue;
        }

        // case 2: interleaving
        if(last.count(a[i])){
            // if gap contains another duplicate
            // we reset segment (greedy cut)
            freq.clear();
            last.clear();
            changes++;
        }

        last[a[i]] = i;
    }

    return changes;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
}