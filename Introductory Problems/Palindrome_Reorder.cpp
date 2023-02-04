#include<bits/stdc++.h>
using namespace std;

bool isAnagramPalindrome(string s){
    vector<int> freq(26,0);
    for(char c:s)
        freq[c-'A']++;
    int odd_count = 0;
    for(int i:freq)
        odd_count += i&1;
    return odd_count<=1;
}

void solve(){
    string s;
    cin>>s;
    if(!isAnagramPalindrome(s)){
        cout<<"NO SOLUTION\n";
        return;
    }
    vector<int> freq(26,0);
    for(char c:s)
        freq[c-'A']++;
    string palindrome = "";
    string mid = "";
    for(int i=0;i<26;i++){
        for(int fq = 0; fq<freq[i]/2; fq++){
            palindrome += (char)('A'+i);
        }
        if(freq[i]&1) mid += (char)('A'+i);
    }
    palindrome += mid;
    for(int i=25;i>=0;i--){
        for(int fq = 0; fq<freq[i]/2; fq++){
            palindrome += (char)('A'+i);
        }
    }
    cout<<palindrome<<"\n";
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