#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) 
        i--;

    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) 
            j--;
        swap(&arr[i], &arr[j]);
    }

    reverse(arr, i + 1, n - 1);
}

void main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        int arr[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        nextPermutation(arr, N);

        for (int i = 0; i < N; i++)
          {
            printf("%d ", arr[i]);
          }
        printf("\n");
    }

}
