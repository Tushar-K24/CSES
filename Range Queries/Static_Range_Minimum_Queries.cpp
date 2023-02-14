#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    int l, r;
    cin>>n>>q;
    vector<int> nums(n);
    for(int &num:nums)
        cin>>num;
    int k = log2(n);
    int st[k + 1][n] = {0};
    for(int i=0;i<n;i++)
        st[0][i] = nums[i];
    for(int i=1;i<=k;i++){
        for(int j=0; j+(1<<i)<=n; j++){
            st[i][j] = min(st[i-1][j], st[i-1][j+(1<<(i-1))]);
        }
    }
    while(q--){
        cin>>l>>r;
        l--, r--;
        int diff = r-l+1;
        int mn = INT_MAX;
        int bit = 0;
        while(diff){
            if(diff&1){
                mn = min(mn, st[bit][l]);
                l+=(1ll<<bit);
            }
            bit++;
            diff>>=1;
        }
        cout<<mn<<"\n";
    }
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