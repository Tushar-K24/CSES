#include<iostream>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n>1){
        //if n is odd
        if(n&1)
            n = 3*n + 1;
        else //n is even
            n >>= 1;

        cout<<n<<" ";
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