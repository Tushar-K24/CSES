#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    int l, r;
    cin>>n>>q;
    vector<long long> nums(n);
    for(long long &num:nums)
        cin>>num;
    for(int i=1;i<n;i++)
        nums[i]+=nums[i-1];
    while(q--){
        cin>>l>>r;
        l--, r--;
        long long sum = nums[r];
        if(l>0) sum -= nums[l-1];
        cout<<sum<<"\n"; 
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