

/* >>> Name Replacement Program ( Version 1 ) <<< */

/* >>> A program with 3 names, asks the user to enter his name and replaces the first name in the program with the user name and prints the names on the screen. <<< */

#include <stdio.h>
#include <string.h>

int Name_Replacement();

int main()
{
    printf("\n\nYou welcome in Name Replacement Program ( Version 1 ) ..\n\n");

    Name_Replacement();

    return 0;
}

// Functions ..
// Name Replacement function;
int Name_Replacement()
{
    // Declaration array of characters and counters;
    char name[3][20] = {"kifah", "kifah", "saloum"};
    int i;

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name[0]);

    printf("\n");

    // Printing array;
    printf("The names is : \n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }
    

    printf("\n\n");
}