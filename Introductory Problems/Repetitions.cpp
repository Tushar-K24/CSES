#include<iostream>
using namespace std;

void solve(){
    string dnaSequence;
    cin>>dnaSequence;
    int longestRepetition = 1;
    int currentRepetition = 1;
    int dnaSequenceLength = dnaSequence.size();
    for(int seq_idx = 1; seq_idx < dnaSequenceLength; seq_idx++){
        if(dnaSequence[seq_idx]!=dnaSequence[seq_idx-1]){
            currentRepetition = 1;
        }
        else 
            currentRepetition++;        
        longestRepetition = max(longestRepetition, currentRepetition);
    }
    cout<<longestRepetition<<"\n";
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