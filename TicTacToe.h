#include <vector> 

// ������� ��� ������ �������� ���� 
void printBoard(const std::vector<std::vector<char>>& board);

// ������� ��� �������� ������ 
bool checkWin(const std::vector<std::vector<char>>& board, char player);

// ������� ��� ��������� ���� 
bool makeMove(std::vector<std::vector<char>>& board, int row, int col, char player);