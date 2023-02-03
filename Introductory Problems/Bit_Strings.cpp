#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n, int mod){
    long long res = 1;
    while(n){
        if(n&1) res = (res*x)%mod;
        x = ((long long)x*x)%mod;
        n>>=1;
    }
    return res;
}


const int mod = 1e9 + 7;
void solve(){
    int n;
    cin>>n;
    cout<<pow(2,n,mod)<<"\n";
};

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