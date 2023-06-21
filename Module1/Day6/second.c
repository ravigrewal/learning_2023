#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    double real;
    double imaginary;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex complex;

    printf("Enter real part: ");
    scanf("%lf", &complex.real);

    printf("Enter imaginary part: ");
    scanf("%lf", &complex.imaginary);

    return complex;
}

// Function to write a complex number
void writeComplex(struct Complex complex) {
    printf("Complex number: %.2lf + %.2lfi\n", complex.real, complex.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;

    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    return sum;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;

    product.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    product.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;

    return product;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Reading first complex number:\n");
    complex1 = readComplex();

    printf("Reading second complex number:\n");
    complex2 = readComplex();

    printf("\n");

    printf("First complex number:\n");
    writeComplex(complex1);

    printf("Second complex number:\n");
    writeComplex(complex2);

    printf("\n");

    sum = addComplex(complex1, complex2);
    printf("Sum of two complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(complex1, complex2);
    printf("Product of two complex numbers:\n");
    writeComplex(product);

    return 0;
}
