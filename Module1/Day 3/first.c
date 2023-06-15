#include <stdio.h>

void printExponent(double x) {
    // Create a pointer to the double variable
    unsigned char* ptr = (unsigned char*)&x;
    
    // Get the exponent bytes
    unsigned char exponentByte1 = ptr[7];
    unsigned char exponentByte2 = ptr[6];
    
    // Get the exponent value by masking the necessary bits
    unsigned int exponent = ((exponentByte1 & 0x7F) << 4) | (exponentByte2 >> 4);
    
    // Print the exponent in hexadecimal format
    printf("Exponent (Hex): 0x%X\n", exponent);
    
    // Print the exponent in binary format
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    
    printExponent(x);
    
    return 0;
}
