#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> weights(n);
    for(int &weight:weights)
        cin>>weight;
    long long sum1 = 0, sum2 = 0;
    long long difference = 1e12;
    function<void(int)> divideApples = [&](int currentPosition){
        if(currentPosition == n){
            difference = min(difference, abs(sum1 - sum2));
            return;
        }
        sum1 += weights[currentPosition];
        divideApples(currentPosition+1);
        sum1 -= weights[currentPosition];
        sum2 += weights[currentPosition];
        divideApples(currentPosition+1);
        sum2 -= weights[currentPosition];
    };
    divideApples(0);
    cout<<difference<<"\n";
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