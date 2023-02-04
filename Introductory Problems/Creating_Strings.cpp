#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; 
    cin>>s;
    sort(s.begin(), s.end());
    set<string> possibleStrings;
    do{
        possibleStrings.insert(s);
    }while(next_permutation(s.begin(), s.end()));
    cout<<possibleStrings.size()<<"\n";
    for(string cur_s: possibleStrings){
        cout<<cur_s<<"\n";
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