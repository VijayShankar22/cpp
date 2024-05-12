// Q8.Write a Program to Rotate the Elements of a Matrix.



//clockwise

#include <iostream>
#define R 3
#define C 3
using namespace std;

void rotatematrix(int m, int n, int mat[R][C]) {
    int row, col;
    int prev, curr;

    row = 0;
    col = 0;
    prev = mat[row + 1][col];

    while (row < m && col < n) {
        if (row + 1 == m || col + 1 == n)
            break;

        for (int i = col; i < n; i++) {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;

        for (int i = row; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;

        if (row < m) {
            for (int i = n - 1; i >= col; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        if (col < n) {
            for (int i = m - 1; i >= row; i--) {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
	cout << "Rotated matrix" << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int a[R][C];
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
			cout << "Enter element of (3x3 matrix): ";
            cin >> a[i][j];
        }
    }

	cout << "Orignal matrix" << endl;

	for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    rotatematrix(R, C, a);
    
    return 0;
}