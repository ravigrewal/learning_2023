#include <stdio.h>
#include <string.h>

void leftRotateString(char* str, int rotation) {
    int length = strlen(str);
    rotation %= length;

    // Rotate the string
    for (int i = 0; i < rotation; i++) {
        char temp = str[0];
        for (int j = 0; j < length - 1; j++) {
            str[j] = str[j + 1];
        }
        str[length - 1] = temp;
    }
}

int main() {
    char str[100];
    int rotation;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the rotation value: ");
    scanf("%d", &rotation);

    printf("Before rotation: %s\n", str);

    leftRotateString(str, rotation);

    printf("After left rotation: %s\n", str);

    return 0;
}
