#include <stdio.h>
#include <string.h>

#define NUM_NAMES 7

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void sortNames(char *names[], int numNames) {
    int i, j;

    for (i = 0; i < numNames - 1; i++) {
        for (j = 0; j < numNames - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                swap(&names[j], &names[j + 1]);
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int numNames = NUM_NAMES;

    printf("Original names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    sortNames(names, numNames);

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
