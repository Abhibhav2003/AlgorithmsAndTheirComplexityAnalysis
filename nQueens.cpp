#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int row, int col, vector<vector<int>>& board, int N) {
    // Check for queens in the same column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
    }

    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1)
            return false;
    }

    // Check upper right diagonal
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1)
            return false;
    }

    return true;
}

int nQueens(int row, vector<vector<int>>& board, int N) {
    if (row >= N)
        return 1; // Base case: all queens are placed

    int count = 0;
    for (int col = 0; col < N; col++) {
        if (isSafe(row, col, board, N)) {
            board[row][col] = 1; // Place queen

            // Recur for the next row
            count += nQueens(row + 1, board, N);

            board[row][col] = 0; // Backtrack
        }
    }

    return count;
}

int solveNQueens(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0)); // Initialize empty board
    return nQueens(0, board, N);
}

int main() {
    int N = 4; // Size of the chessboard
    cout << "Number of solutions for " << N << "-Queens problem: " << solveNQueens(N) << endl;
    return 0;
}
