#include <stdio.h>

int findDifference(int arr[], int size) {
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    return sumOdd - sumEven;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = findDifference(arr, size);

    printf("Difference between sum of elements at odd and even indices: %d\n", difference);

    return 0;
}
