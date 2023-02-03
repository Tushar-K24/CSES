#include<iostream>
using namespace std;

void solve(){
    int y, x;
    cin>>y>>x;
    long long start = max(x,y) - 1, end = max(x,y);
    start *= start; end *= end;
    start++;
    long long value = 0;
    if(x<y){
        if(y&1)
            value = start + x - 1;
        else
            value = end - x + 1;
    }
    else{
        if(x&1)
            value = end - y + 1;
        else
            value = start + y - 1;
    }
    cout<<value<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases = 1;
    cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}