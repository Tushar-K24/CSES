#include<bits/stdc++.h>
using namespace std;

void add(vector<long long> &fenwickTree, int pos, int x){
    //adds x to the element at position pos
    int n = fenwickTree.size();
    while(pos<n){
        fenwickTree[pos] += x;
        pos += pos&-pos;
    }
}

long long sum(vector<long long> &fenwickTree, int pos){
    //returns sum from 1 to position pos
    long long s = 0;
    while(pos>=1){
        s += fenwickTree[pos];
        pos -= pos&-pos;
    }
    return s;
}

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> nums(n);
    for(int &num:nums)
        cin>>num;

    //build fenwick tree
    vector<long long> fenwickTree(n+1);
    for(int i=0;i<n;i++)
        add(fenwickTree, i+1, nums[i]);
    
    while(q--){
        int type, u, v;
        cin>>type>>u>>v;
        if(type == 1){
            add(fenwickTree, u, v - nums[u-1]);
            nums[u-1] = v;
        }
        else{
            cout<<sum(fenwickTree, v) - sum(fenwickTree, u-1)<<"\n";
        }
    }
}

int main(){
    int test_cases = 1;
    // cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}