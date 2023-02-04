#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    vector<pair<int,int>> moves;
    function<void(int, int, int, int)> shiftDisks = [&](int st, int mid, int en, int n){
        if(n==1){
            moves.push_back({st,en});
            return;
        }
        shiftDisks(st, en, mid, n-1);
        moves.push_back({st, en});
        shiftDisks(mid, st, en, n-1);
    };
    shiftDisks(1,2,3,n);
    cout<<moves.size()<<"\n";
    for(auto move:moves){
        cout<<move.first<<" "<<move.second<<"\n";
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