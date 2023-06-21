#include <stdio.h>
#include <string.h>
// Structure to store student data
struct Student {
    char name[50];
    int age;
};

// Function to swap the fields of two structures
void swapStructFields(struct Student *s1, struct Student *s2) {
    // Swap name field
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);

    // Swap age field
    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;
}

int main() {
    // Create two instances of the Student structure
    struct Student student1, student2;

    // Read the fields of the first structure from the user
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);

    // Read the fields of the second structure from the user
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);

    // Display the original data
    printf("\nOriginal Data:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);

    // Swap the fields using the swapStructFields() function
    swapStructFields(&student1, &student2);

    // Display the swapped data
    printf("\nSwapped Data:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);

    return 0;
}

