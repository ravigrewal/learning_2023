#include <stdio.h>

void calculateSumAndAverage(int arr[], int size, int *sum, float *average) {
    *sum = 0;

    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }

    *average = (float)(*sum) / size;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum;
    float average;

    calculateSumAndAverage(arr, size, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
