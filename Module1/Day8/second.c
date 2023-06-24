#include <stdio.h>
#include <string.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *destinationFile, int option) {
    char ch;
    int isFirstLetter=1;
    while ((ch = fgetc(sourceFile)) != EOF) {
        
        if (option == 3) { // convert to purely upper case
            if (isFirstLetter) {
            fputc(toupper(ch), destinationFile);  // Convert the first letter to uppercase
            isFirstLetter = 0;
            } 
            else {
            fputc(tolower(ch), destinationFile);  // Convert the rest of the letters to lowercase
            }

            if (ch == ' ' || ch == '\n') {
            isFirstLetter = 1;  // Reset the flag when encountering a space or newline character
            }
            
        } else if (option == 2) {
            fputc(tolower(ch), destinationFile);  // Convert to lower case
        } else if (option == 1) {
           fputc(toupper(ch), destinationFile);    // Convert to  upper case
           
        } else {
            fputc(ch, destinationFile);  // Normal copy
        }
    }
}

int main() {
    
    FILE *sourceFile, *destinationFile;

    // Open source file in reading mode
    sourceFile = fopen("f1.txt", "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }
    printf("chosse one option among l for lower,u for upper ,s for purely upper or any char for normal copy : ");
    char option;
    scanf("%c",&option);
    int copyOption = 0;
    
    // Open destination file in writing mode
    if(option=='u'){
        copyOption = 1;
        destinationFile = fopen("f3.txt", "w");
        
    }
    else if(option=='l'){
        copyOption = 2;
        destinationFile = fopen("f4.txt", "w");
        
    }
    else if(option=='s'){
        copyOption = 3;
        destinationFile = fopen("f5.txt", "w");
    }
    else{
        destinationFile = fopen("f6.txt", "w");
        
    }

    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
        }
    
    // Perform the file copy with the selected option
    copyFile(sourceFile, destinationFile, copyOption);

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
