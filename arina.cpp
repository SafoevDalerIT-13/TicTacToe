int main() {
    setlocale(LC_ALL, "RU");
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int moves = 0;

    while (true) {
        printBoard(board);
        int row, col;
        cout << "����� " << currentPlayer << ", ������� ������ � ������� (0-2): ";
        cin >> row >> col;

        // ��������� ����
        if (!makeMove(board, row, col, currentPlayer)) {
            cout << "�������� ���. ���������� �����." << endl;
            continue;
        }

        moves++;
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "����� " << currentPlayer << " �������!" << endl;
            break;
        }
        else if (moves == 9) {
            printBoard(board);
            cout << "���� ����������� ������!" << endl;
            break;
        }

        // ����� ������
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}