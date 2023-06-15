#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* ptr1 = (unsigned char*)a;
    unsigned char* ptr2 = (unsigned char*)b;
    
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
}

int main() {
    int a = 10;
    int b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b, sizeof(int));
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    double x = 1.23;
    double y = 4.56;
    
    printf("Before swap: x = %lf, y = %lf\n", x, y);
    
    swap(&x, &y, sizeof(double));
    
    printf("After swap: x = %lf, y = %lf\n", x, y);
    
    return 0;
}
