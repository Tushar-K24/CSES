#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string cur = "";
    for(int i=0;i<n;i++) cur += '0';
    for(int i=0;i<(1ll<<n);i++){
        for(int j=0;j<n;j++){
            if(((i + (1ll<<j))/(1ll<<(j+1))) & 1)
                cur[j] = '1';
            else 
                cur[j] = '0';
        }    
        cout<<cur<<"\n";    
    }
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