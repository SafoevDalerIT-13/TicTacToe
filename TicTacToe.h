#include <vector> 

// Функция для вывода игрового поля 
void printBoard(const std::vector<std::vector<char>>& board);

// Функция для проверки победы 
bool checkWin(const std::vector<std::vector<char>>& board, char player);

// Функция для обработки хода 
bool makeMove(std::vector<std::vector<char>>& board, int row, int col, char player);