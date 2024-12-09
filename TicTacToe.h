#include <iostream> 
#include <vector> 

 
using namespace std; 
 
void printBoard(const vector<vector<char>>& board); 
bool checkWin(const vector<vector<char>>& board, char player); 
bool makeMove(vector<vector<char>>& board, int row, int col, char player);
