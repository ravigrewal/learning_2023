#include <stdio.h>
#include <stdlib.h> 

int findLargestNumber(int num) {
    int maxNum = 0;

    // Convert the number to a string for easier manipulation
    char strNum[5];
    sprintf(strNum, "%d", num);

    // Iterate through each digit and delete it
    for (int i = 0; i < 4; i++) {
        // Create a temporary string without the current digit
        char tempNum[4];
        int index = 0;

        for (int j = 0; j < 4; j++) {
            if (j != i) {
                tempNum[index++] = strNum[j];
            }
        }

        // Add null terminator to the temporary string
        tempNum[index] = '\0';

        // Convert the temporary string back to an integer
        int tempInt = atoi(tempNum);

        // Update the maximum number if the current number is larger
        if (tempInt > maxNum) {
            maxNum = tempInt;
        }
    }

    return maxNum;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largestNum);

    return 0;
}
