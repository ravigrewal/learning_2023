#include <stdio.h>

// Function to print from 1 to n
void printFrom1ToN(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

// Function to print spaces in between
void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

// Function to print from n to 1
void printFromNTo1(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Printing the pattern
    for (int i = n; i >= 1; i--) {
        printFrom1ToN(i);              // Print from 1 to i
        printSpaces(2 * (n - i));      // Print spaces in between
        printFromNTo1(i);          // Print from i to 1 
        
        printf("\n");
    }

    return 0;
}
