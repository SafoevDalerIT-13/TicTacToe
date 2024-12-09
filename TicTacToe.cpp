#include "TicTacToe.h" 
#include <vector> 
 
using namespace std; 
 
bool checkWin(const vector<vector<char>>& board, char player) { 
    for (int i = 0; i < 3; i++) { 
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) { 
            return true; 
        } 
    } 
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) { 
        return true; 
    } 
    return false; 
} 
 
bool makeMove(vector<vector<char>>& board, int row, int col, char player) { 
    if (board[row][col] == ' ') { 
        board[row][col] = player; 
        return true; 
    } 
    return false; 
} 
