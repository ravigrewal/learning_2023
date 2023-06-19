#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit (most significant bit)

    for (i = 0; i < 32; i++) {
        // Use bitwise AND operator to check if the bit is set or not
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }

        // Shift the mask one bit to the right
        mask >>= 1;

        // Add a space after every 8 bits for readability
        if ((i + 1) % 8 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}
