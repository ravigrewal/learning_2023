#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* array, int size) {
    char input[100];
    for (int i = 0; i < size; i++) {
        printf("Enter data for student %d: ", i + 1);
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d %s %f", &(array[i].rollno), array[i].name, &(array[i].marks));
    }
}



int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // consume the newline character from previous input

    struct Student* students = malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    initializeArray(students, size);

    

    free(students);
    return 0;
}
