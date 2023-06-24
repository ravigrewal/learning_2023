#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
  
    char ch;

    

    // Open source file in reading mode
    sourceFile = fopen("f1.txt", "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    

    // Open destination file in writing mode
    destinationFile = fopen("f2.txt", "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
