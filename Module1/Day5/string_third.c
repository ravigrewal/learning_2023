#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int timeToSeconds(char* time) {
    int hours, minutes, seconds;
    char* token;

    // fetching the hours, minutes, and seconds from the time string
    token = strtok(time, ":");
    hours = atoi(token);
    token = strtok(NULL, ":");
    minutes = atoi(token);
    token = strtok(NULL, ":");
    seconds = atoi(token);

    // Calculate the total seconds
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    return totalSeconds;
}

int main() {
    char time[10];

    printf("Enter the time in HH:MM:SS format: ");
    scanf("%s", time);

    int totalSeconds = timeToSeconds(time);

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
