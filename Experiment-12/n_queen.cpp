#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;

bool isSafe(vector<int>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return false;
    }
    return true;
}

bool solveNQueen(vector<int>& board, int row) {
    if (row == n)
        return true;
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            if (solveNQueen(board, row + 1))
                return true;
            board[row] = -1;
        }
    }
    return false;
}

int main() {
    cout << "Enter number of queens: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input\n";
        return 0;
    }
    vector<int> board(n, -1);
    if (solveNQueen(board, 0)) {
        cout << "Solution:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << (board[i] == j ? "Q " : ". ");
            cout << "\n";
        }
    } else {
        cout << "No solution exists\n";
    }
    return 0;
}
