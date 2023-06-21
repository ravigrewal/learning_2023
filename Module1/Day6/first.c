#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculateVolumeAndSurfaceArea(struct Box *box) {
    double volume = box->length * box->width * box->height;
    double surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box box = { 5.0, 3.0, 4.0 };
    struct Box *ptr = &box;

    // Accessing members using (*) asterisk or indirection operator and (.) dot operator
    calculateVolumeAndSurfaceArea(&box);

    // Accessing members using (->) arrow operator using pointer
    calculateVolumeAndSurfaceArea(ptr);

    return 0;
}
