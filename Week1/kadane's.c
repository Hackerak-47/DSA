#include <stdio.h>

int kadanesTri(int arr[], int size) {
    int maxSum = arr[0], currSum = arr[0];

    for (int i = 1; i < size; i++) {
        currSum = (currSum < 0) ? arr[i] : currSum + arr[i];
        maxSum = (currSum > maxSum) ? currSum : maxSum;
    }

    return maxSum;
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", kadanesTri(arr, size));

    return 0;
}
