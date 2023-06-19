#include <stdio.h>

void convertToBinary(int num) {
    int binary[32];
    int index = 0;

    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void convertToOctal(int num) {
    int octal[32];
    int index = 0;

    while (num > 0) {
        octal[index] = num % 8;
        num = num / 8;
        index++;
    }

    printf("Octal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

void convertToHexadecimal(int num) {
    char hex[32];
    int index = 0;

    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex[index] = remainder + '0';
        } else {
            hex[index] = remainder - 10 + 'A';
        }
        num = num / 16;
        index++;
    }

    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        printf("Number: %d\n", arr[i]);
        convertToBinary(arr[i]);
        convertToOctal(arr[i]);
        convertToHexadecimal(arr[i]);
        printf("\n");
    }

    return 0;
}
