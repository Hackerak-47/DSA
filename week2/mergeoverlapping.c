#include <stdio.h>
#include <stdlib.h>

struct Interval
{
    int start, end;
};

int compare(const void *a, const void *b) {
    return ((struct Interval*)a)->start - ((struct Interval*)b)->start;
}

void mergeOverlappingIntervals(struct Interval arr[], int size) {
    qsort(arr, size, sizeof(struct Interval), compare);

    int merged[size][2], index = 0;
    merged[index][0] = arr[0].start;
    merged[index][1] = arr[0].end;

    for (int i = 1; i < size; i++) {
        if (arr[i].start <= merged[index][1]) {
            if (arr[i].end > merged[index][1])
                merged[index][1] = arr[i].end;
        } else {
            index++;
            merged[index][0] = arr[i].start;
            merged[index][1] = arr[i].end;
        }
    }

    for (int i = 0; i <= index; i++) {
        printf("[%d, %d] ", merged[i][0], merged[i][1]);
    }
    printf("\n");
}

int main() {
    int size;
    scanf("%d", &size);
    struct Interval arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }

    mergeOverlappingIntervals(arr, size);
    return 0;
}
