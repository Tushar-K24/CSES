#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int twos = 0, fives = 0;
    int pow2 = 2, pow5 = 5;
    while(pow5<=n){
        twos += n/pow2;
        fives += n/pow5;
        pow2*=2;
        pow5*=5;
    }
    cout<<min(twos, fives)<<"\n";
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