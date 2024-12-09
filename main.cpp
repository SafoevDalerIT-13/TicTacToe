#include "TicTacToe.h" 
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
int main() { 
    vector<vector<char>> board(3, vector<char>(3, ' ')); 
    char currentPlayer = 'X'; 
    int moves = 0; 
 
    while (true) { 
        printBoard(board); 
        int row, col; 
        cout << "Игрок " << currentPlayer << ", введите строку и столбец (0-2): "; 
        cin >> row >> col; 
 
        if (!makeMove(board, row, col, currentPlayer)) { 
            cout <<

"Неверный ход. Попробуйте снова." << endl; 
            continue; 
        } 
 
        moves++; 
        if (checkWin(board, currentPlayer)) { 
            printBoard(board); 
            cout << "Игрок " << currentPlayer << " победил!" << endl; 
            break; 
        } else if (moves == 9) { 
            printBoard(board); 
            cout << "Игра закончилась вничью!" << endl; 
            break; 
        } 
 
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; 
    } 
 
    return 0; 
}
