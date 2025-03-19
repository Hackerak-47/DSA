#include <stdio.h>

void sortNumbers(int nums[], int size) {
    int left = 0, mid = 0, right = size - 1;

    while (mid <= right) {
        if (nums[mid] == 0) {
            int temp = nums[left];
            nums[left] = nums[mid];
            nums[mid] = temp;
            left++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            int temp = nums[mid];
            nums[mid] = nums[right];
            nums[right] = temp;
            right--;
        }
    }
}

int main() {
    int testCases, length;
    scanf("%d", &testCases);

    while (testCases--) {
        scanf("%d", &length);
        int nums[length];

        for (int i = 0; i < length; i++)
            scanf("%d", &nums[i]);

        sortNumbers(nums, length);

        for (int i = 0; i < length; i++)
            printf("%d ", nums[i]);
        printf("\n");
    }

    return 0;
}
