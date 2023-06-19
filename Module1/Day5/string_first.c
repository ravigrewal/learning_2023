#include <stdio.h>

void toggleString(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

int main() {
    char str[]="raVi += grEwaL ";
    printf("Original string: %s\n", str);

    toggleString(str);
    printf("Toggled string: %s\n", str);

    return 0;
}
