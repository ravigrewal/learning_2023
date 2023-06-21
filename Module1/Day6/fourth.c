#include <stdio.h>
#include <stdlib.h>

// Structure to store student data
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;

    // Read the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of structures
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Read student data from the user
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student data
    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
