#include <stdio.h>

void setZeroes(int matrix[][100], int rows, int cols) {
    int zerorows[rows], zero_cols[cols];
    for (int i = 0; i < rows; i++) zerorows[i] = 0;
    for (int j = 0; j < cols; j++) zerocols[j] = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zerorows[i] = 1; 
                zerocols[j] = 1; 
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        if (zerorows[i]) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < cols; j++) {
        if (zerocols[j]) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100], rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    setZeroes(matrix, rows, cols);

    printf("Modified matrix:\n");
    printMatrix(matrix, rows, cols);

    return 0;
}
