#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    long long sum = (long long)n*(n+1)/2;
    if(sum&1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    sum>>=1;
    vector<bool> group1(n, false);
    int group1Count = 0;
    for(int i=n;i>0;i--){
        if(sum>=i){
            group1[i-1] = true;
            sum -= i;
            group1Count++;
        }
    }
    cout<<group1Count<<"\n";
    for(int i=0;i<n;i++){
        if(group1[i])
            cout<<i+1<<" ";
    }
    cout<<"\n"<<n - group1Count<<"\n";
    for(int i=0;i<n;i++){
        if(!group1[i])
            cout<<i+1<<" ";
    }
    cout<<"\n";
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