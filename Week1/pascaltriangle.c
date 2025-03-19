#include <stdio.h>

void PascalsTriangle(int N) {
    int tri[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                tri[i][j] = 1;
            else
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];

            printf("%d ", tri[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    PascalsTriangle(N);
    return 0;
}
