#include <stdio.h>

void findRepeatingAndMissing(int arr[], int n) {
    long long sumN = (n * (n + 1)) / 2;
    long long sumNSq = (n * (n + 1) * (2 * n + 1)) / 6;

    long long sumArr = 0, sumSqArr = 0;
    
    for (int i = 0; i < n; i++) {
        sumArr += arr[i];
        sumSqArr += (long long)arr[i] * arr[i];
    }

    long long diff = sumN - sumArr;
    long long sum = (sumNSq - sumSqArr) / diff;

    int missing = (diff + sum) / 2;
    int repeating = missing - diff;

    printf("Repeating: %d, Missing: %d\n", repeating, missing);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findRepeatingAndMissing(arr, n);
    return 0;
}
