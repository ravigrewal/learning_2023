#include <stdio.h>

void swapAlternateElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 3) {
        if(i+2<size-1){
        int temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
    }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, size);
    
    swapAlternateElements(arr, size);
    
    printf("Swapped array: ");
    printArray(arr, size);
    
    return 0;
}
