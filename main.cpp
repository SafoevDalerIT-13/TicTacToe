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
// Функция для проверки победы 
bool checkWin(const vector<vector<char>>& board, char player) {
    // Проверка строк и столбцов 
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Проверка диагоналей 
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Функция для обработки хода 
bool makeMove(vector<vector<char>>& board, int row, int col, char player) {
    if (board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}
// Основная функция игры 
int main() { 
    vector<vector<char>> board(3, vector<char>(3, ' ')); 
    char currentPlayer = 'X'; 
    int moves = 0; 
 
    while (true) { 
        printBoard(board); 
        int row, col; 
        cout << "Игрок " << currentPlayer << ", введите строку и столбец (0-2): "; 
        cin >> row >> col; 
 
        // Обработка хода 
        if (!makeMove(board, row, col, currentPlayer)) { 
            cout << "Неверный ход. Попробуйте снова." << endl; 
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
 
        // Смена игрока 
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; 
    } 
 
    return 0; 
}
