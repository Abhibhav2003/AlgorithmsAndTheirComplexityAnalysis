#include <iostream>
#include <vector>

using namespace std;

void generateMagicSquare(int n) {
    vector<vector<int>> magicSquare(n, vector<int>(n, 0));

    // Initialize position for 1
    int i = n / 2;
    int j = n - 1;

    // One by one put all values in magic square
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) { // Adjust for position
            j = n - 2;
            i = 0;
        } else {
            if (j == n) // Adjust for columns exceeding matrix
                j = 0;
            if (i < 0) // Adjust for rows less than zero
                i = n - 1;
        }
        if (magicSquare[i][j] != 0) { // Adjust if position is already filled
            j -= 2;
            i++;
            continue;
        } else {
            magicSquare[i][j] = num++; // Inserting value in the matrix
        }
        j++;
        i--;
    }

    // Print the magic square
    cout << "The Magic Square for n=" << n << ":\nSum of each row or column or diagonal: " << n * (n * n + 1) / 2 << "\n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << magicSquare[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the magic square (odd): ";
    cin >> n;

    if (n % 2 != 0) {
        generateMagicSquare(n);
    } else {
        cout << "Invalid input. Please enter an odd number." << endl;
    }

    return 0;
}
