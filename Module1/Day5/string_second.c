#include <stdio.h>

int stringToInteger(char* str) {

    int result = 0;
    int i = 0;

    while (str[i] != '\0') {
        // Check if the character is a digit
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            // Invalid character found
            printf("Invalid input\n");
            return 0;
        }
        i++;
    }

    

    return result;
}

int main() {
    char str[] = "12345";
    int num = stringToInteger(str);

    printf("The converted integer is: %d\n", num);

    return 0;
}
