#include <stdio.h>

int compareBoxes(int A[], int B[], int size) {
    int i, j, match;

    // Iterate over each item in A
    for (i = 0; i < size; i++) {
        match = 0;

        // Check if the item in A exists in B
        for (j = 0; j < size; j++) {
            if (A[i] == B[j]) {
                match = 1;
                break;
            }
        }

        // If the item in A does not exist in B, return 0
        if (!match) {
            return 0;
        }
    }

    // If all items in A exist in B, return 1
    return 1;
}

int main() {
    int A[] = {200, 10, -90};
    int B[] = {-90, 200, 10};
    int size = sizeof(A) / sizeof(A[0]);

    int result = compareBoxes(A, B, size);

    printf("Result: %d\n", result);

    return 0;
}
