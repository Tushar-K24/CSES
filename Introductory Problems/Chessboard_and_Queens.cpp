#include<bits/stdc++.h>
using namespace std;

void solve(){
    int boardSize = 8;
    vector<string> chessBoard(boardSize);
    for(string &chessRow:chessBoard)
        cin>>chessRow;
    
    int validWayCount = 0;
    
    function<bool(int,int)> cellValid = [&](int row, int col){
        return row>=0 and row<boardSize and col>=0 and col<boardSize;
    };

    function<bool(int, int)> blockSafe = [&](int row, int col){
        
        if(chessBoard[row][col] == '*') //block restricted, placing queen is not possible
            return false;

        //check prev rows with same column
        for(int curRow = 0; curRow<row; curRow++){
            if(chessBoard[curRow][col]=='Q')
                return false;
        }

        //check diagonals
        for(int dd=1; dd<boardSize; dd++){
            if(cellValid(row-dd, col-dd) and chessBoard[row-dd][col-dd] == 'Q')
                return false;
            
            if(cellValid(row-dd, col+dd) and chessBoard[row-dd][col+dd] == 'Q')
                return false;
        }

        return true;
    };

    function<void(int)> validConfigurations = [&](int currentRow){
        if(currentRow == boardSize){        
            validWayCount++;
            return;
        }
        for(int col = 0; col<boardSize; col++){
            if(blockSafe(currentRow, col)){
                chessBoard[currentRow][col] = 'Q';
                validConfigurations(currentRow + 1);
                chessBoard[currentRow][col] = '.';
            }
        }
    };

    validConfigurations(0);
    cout<<validWayCount<<"\n";
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