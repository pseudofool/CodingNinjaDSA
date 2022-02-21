#include<bits/stdc++.h>
using namespace std;

int board[11][11];

bool isPossible(int n, int row, int col){
    // check for upper left diagonal
	for (int i = row-1, j = col-1; i>=0 && j>=0; i--, j--){
        if (board[i][j] == 1){
            return false;
        }
    }
    
    // check for upper right diagonal
    for (int i=row-1, j = col+1; i>=0 && j<n; i--, j++){
        if (board[i][j] == 1){
            return false;
        }
    }
    // check for upper column
    for (int i=row-1; i>=0; i--){
        if (board[i][col] == 1){
            return false;
        }
    }
    
    return true;
}
void NQueenHelper(int n, int row){
    if (row == n){
        // means we have reached to some solutino
        // so print the solution
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
        
    }
    
    // means we have not get the solution yet 
    // place at all possible positions
    for (int col = 0; col<n; col++){
        if (isPossible(n, row, col)){
            board[row][col] = 1;
            NQueenHelper(n, row+1);
            board[row][col] = 0;
        }
    }
    return;
}

void placeNQueens(int n){
    memset(board, 0, 11*11*sizeof(int));
    NQueenHelper(n, 0);
}
int main(){
    int n;
    cin >> n;
    placeNQueens(n);
    // write your code here
    return 0;
}