#include <iostream>
using namespace std;

#define N 9


void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}


bool isSafe(int grid[N][N], int row, int col, int num) {
    
    for (int x = 0; x < N; x++)
        if (grid[row][x] == num)
            return false;

    
    for (int x = 0; x < N; x++)
        if (grid[x][col] == num)
            return false;

    
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[startRow + i][startCol + j] == num)
                return false;

    return true;
}


bool solveSudoku(int grid[N][N]) {
    int row, col;
    bool emptyFound = false;

    
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                emptyFound = true;
                break;
            }
        }
        if (emptyFound)
            break;
    }

    
    if (!emptyFound)
        return true;

    
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            
            grid[row][col] = 0;
        }
    }
    return false;
}

int main() {
    int grid[N][N];

    cout << "Enter the Sudoku grid (use 0 for empty cells):\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> grid[i][j];

    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku:\n";
        printGrid(grid);
    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}
