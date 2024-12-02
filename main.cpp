#include <iostream> 
#include <vector> 
 
using namespace std; 
 
// Функция для вывода игрового поля 
void printBoard(const vector<vector<char>>& board) { 
    for (const auto& row : board) { 
        for (const auto& cell : row) { 
            cout << cell << " "; 
        } 
        cout << endl; 
    } 
}

