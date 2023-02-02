#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int missing_number = n;
    int current_number;
    for(int i=1; i<n; i++){
        cin>>current_number;
        missing_number ^= i;
        missing_number ^= current_number;
    }
    cout<<missing_number<<"\n";
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