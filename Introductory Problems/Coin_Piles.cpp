#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin>>a>>b;
    //x + 2y = a
    //y + 2x = b
    //x+y = (a+b)/3 = t1
    //x-y = b-a = t2
    if((a+b)%3){
        cout<<"NO\n";
        return;
    }
    int t1 = (a+b)/3;
    int t2 = b-a;
    if((t1+t2)&1 or t1+t2<0)
        cout<<"NO\n";
    else if(t1-t2<0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
};

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