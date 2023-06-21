#include <stdio.h>

// Structure to represent a time period
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time difference;

    // Convert everything to seconds for easier calculation
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    // Calculate the absolute difference in seconds
    int differenceInSeconds = startTimeInSeconds > endTimeInSeconds ? startTimeInSeconds - endTimeInSeconds : endTimeInSeconds - startTimeInSeconds;

    // Convert the difference back to hours, minutes, and seconds
    difference.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    difference.minutes = differenceInSeconds / 60;
    difference.seconds = differenceInSeconds % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    // Read the start time from the user
    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);

    // Read the end time from the user
    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hours);
    printf("Minutes: ");
    scanf("%d", &endTime.minutes);
    printf("Seconds: ");
    scanf("%d", &endTime.seconds);

    // Calculate the difference between the two time periods
    difference = calculateTimeDifference(startTime, endTime);

    // Display the difference
    printf("\nTime difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
