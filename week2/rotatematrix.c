#include<stdio.h>
int main(){
    int n, temp;
    printf("Enter dim");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter ");
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n/2;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-1-j];
                matrix[i][n-1-j] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    


}
