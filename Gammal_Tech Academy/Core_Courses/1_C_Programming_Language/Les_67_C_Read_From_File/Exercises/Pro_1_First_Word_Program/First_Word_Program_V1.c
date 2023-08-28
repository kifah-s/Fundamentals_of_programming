

/* >>> First Word Program ( Version 1 ) <<< */

/* >>> A program that opens a file and reads the first word in it and prints it on the screen. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void writeInFileFun(FILE *filePointer);
void readFromFileFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    writeInFileFun(filePointer);

    readFromFileFun(filePointer);

    return 0;
}

// Functions ..
// Write in file / Function.
void writeInFileFun(FILE *filePointer)
{
    filePointer = fopen("First_Word_V1.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in First Word Program ( Version 1 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "My name \' Kifah Saloum \'");                                 // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}

// Read from file / Function.
void readFromFileFun(FILE *filePointer)
{
    char firstWord[25];
    filePointer = fopen("First_Word_V1.txt", "r"); // Open the file for read.
    fscanf(filePointer, "%s", firstWord);          // Read from file.
    fclose(filePointer);                           // Close the file after reading is finished

    printf("\n%s\n\n", firstWord);
}