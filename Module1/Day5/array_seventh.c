#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int calculateDays(int day, int month, int year) {
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }

    totalDays += day;

    return totalDays;
}

int main() {
    int day, month, year;
    printf("Enter the date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    int elapsedDays = calculateDays(day, month, year);

    printf("Number of days elapsed in the year: %d\n", elapsedDays);

    return 0;
}
