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

void printArray(const struct Student* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", array[i].rollno);
        printf("Name: %s\n", array[i].name);
        printf("Marks: %.2f\n", array[i].marks);
        printf("\n");
    }
}

void searchByName(const struct Student* array, int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", array[i].rollno);
            printf("Name: %s\n", array[i].name);
            printf("Marks: %.2f\n", array[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
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

    printf("\nStudent details:\n");
    printArray(students, size);

    char searchName[20];
    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // remove trailing newline character

    searchByName(students, size, searchName);

    free(students);
    return 0;
}
