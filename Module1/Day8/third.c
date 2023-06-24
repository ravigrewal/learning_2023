#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_SENSOR_NO_LENGTH 10
#define MAX_TIMESTAMP_LENGTH 9

typedef struct {
    int entryNo;
    char sensorNo[MAX_SENSOR_NO_LENGTH];
    float temperature;
    int humidity;
    int light;
    char timestamp[MAX_TIMESTAMP_LENGTH];
} LogEntry;

int readLogFile(LogEntry logEntries[]) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the log file.\n");
        return 0;
    }

    char line[256];
    int entryCount = 0;

    // Read each line of the CSV file
    while (fgets(line, sizeof(line), file)) {
        // Tokenize the line by comma
        char *token;
        token = strtok(line, ",");

        // Extract data from tokens and store in the logEntries array
        logEntries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].timestamp, token);

        entryCount++;
    }

    fclose(file);
    return entryCount;
}

void displayLogEntries(LogEntry logEntries[], int entryCount) {
    printf("Log Entries:\n");
    printf("-----------------------------------------------------\n");
    printf("EntryNo  SensorNo   Temperature  Humidity  Light  Timestamp\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < entryCount; i++) {
        printf("%-8d %-10s %-12.2f %-8d %-6d %-s", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].timestamp);
        printf("\n");
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int entryCount = readLogFile(logEntries);

    if (entryCount > 0) {
        displayLogEntries(logEntries, entryCount);
    } else {
        printf("No log entries found.\n");
    }

    return 0;
}
