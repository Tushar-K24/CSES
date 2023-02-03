#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    function<long long(int)> validWays = [&](int k){
        //k is the size of the checkboard
        long long totalWays = (long long)k*k;
        totalWays *= totalWays-1;
        totalWays >>= 1;
        long long invalidWays = (long long)max(0,k-1)*max(0,k-2)*4;
        return totalWays - invalidWays;
    };
    for(int k = 1; k <= n; k++){
        cout<<validWays(k)<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases = 1;
    // cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}