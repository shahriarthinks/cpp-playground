#include <iostream>
using namespace std;

int main() {
    int m, n, p;

    // Input dimensions
    cout << "Enter the number of rows for Matrix A: ";
    cin >> m;
    cout << "Enter the number of columns for Matrix A (and rows for Matrix B): ";
    cin >> n;
    cout << "Enter the number of columns for Matrix B: ";
    cin >> p;

    int A[m][n], B[n][p], C[m][p];

    // Input Matrix A
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize Matrix C with zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Perform Matrix Multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the Resultant Matrix
    cout << "The resultant matrix (C = A * B) is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
