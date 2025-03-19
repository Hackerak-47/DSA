#include <stdio.h>

int findDuplicate(int nums[], int n) {
    int slow = nums[0], fast = nums[0];

    while (1) {
        slow = nums[slow];
        fast = nums[nums[fast]];

        if (slow == fast)
            break;
    }

    int finder = nums[0];
    while (slow != finder) {
        slow = nums[slow];
        finder = nums[finder];
    }

    return slow;
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n + 1];

    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &nums[i]);
    }

    printf("%d\n", findDuplicate(nums, n));

    return 0;
}
