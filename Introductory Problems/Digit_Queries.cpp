#include<bits/stdc++.h>
using namespace std;

vector<int> lastPositions(20);

int processQuery(int k){
    /*
        s = 1*9 + 2*90 + 3*900 + 4*9000 + (1+x)*9*10^x
        10s =   + 1*90 + 2*900 + ...... +  ........... + (1+x)*9*10^(x+1)
        90(1+x)*10^x - 9s = 1*9 + 1*90 + 1*900 + ...... + 1*9*10^x
        9(1+x)*10^(x+1) - 9s = 10^(x+1)-1
        9s = (9x - 1)*10^x + 1 
    */
    
    //find the number of digits
    int digits = lower_bound(lastPositions.begin(), lastPositions.end(), k) - lastPositions.begin();
    int start = lastPositions[digits-1] + 1;
    


}

void solve(){
    int queries;
    cin>>queries;
    long long power10 = 1;
    for(int digit = 0; digit<20; digit++){
        lastPositions[digit] = ((9*digit - 1)*power10 + 1)/9;
        power10*=10;
    }
    while(queries--){
        int k;
        cin>>k;
        cout<<processQuery(k)<<"\n";
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