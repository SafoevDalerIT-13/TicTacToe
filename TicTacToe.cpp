#include "TicTacToe.h" 
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
void printBoard(const vector<vector<char>>& board) { 
    for (const auto& row : board) { 
        for (const auto& cell : row) { 
            cout << cell << " "; 
        } 
        cout << endl; 
    } 
}
