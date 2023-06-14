#include <stdio.h>

void printGrade(int score) { //find grade according to score
    char grade;

    if (score >= 90 && score <= 100) {
        grade = 'A';
    }
    else if (score >= 75 && score <= 89) {
        grade = 'B';
    }
    else if (score >= 60 && score <= 74) {
        grade = 'C';
    }
    else if (score >= 50 && score <= 59) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("The student's grade is:  %c\n", grade);
}

int main() {
    int score;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    printGrade(score);

    return 0;
}
