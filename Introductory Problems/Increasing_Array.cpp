#include<iostream>
using namespace std;

void solve(){
    int n;
    long long moves = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];    

    for(int i=1;i<n;i++){
        moves += max(a[i-1]-a[i],0);
        a[i] = max(a[i], a[i-1]);
    }
    cout<<moves<<"\n";
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