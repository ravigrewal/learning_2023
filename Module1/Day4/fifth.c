#include <stdio.h>

void findSmallestLargestDigits(int num) {
    int smallestDigit = 9;
    int largestDigit = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit < smallestDigit) {
            smallestDigit = digit;         
        }

        if (digit > largestDigit) {
            largestDigit = digit;
        }

        num /= 10;
    }
    

    printf("Smallest Digit: %d and ", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if(numbers[i]-10>=0){
           findSmallestLargestDigits(numbers[i]);
        }
        else{
            printf("not valid\n");
        }
    }

    

    return 0;
}
