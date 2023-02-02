#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n == 2 || n == 3){
        cout<<"NO SOLUTION\n";
        return;
    }
    for(int i=2; i<=n; i+=2)
        cout<<i<<" ";
    for(int i=1; i<=n; i+=2)
        cout<<i<<" ";
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