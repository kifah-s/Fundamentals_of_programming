

/* >>> Found Number 5 Program ( Version - 1 ) <<< */

/* >>> A program that asks the user to enter a set of numbers and if he finds that there is a number of numbers entered = 5 is applied by "found". <<< */

#include <stdio.h>

int found_number_5();

int main(void)
{
    printf("\n\nYou welcome in Found Number 5 Program ( Version - 1 ) ..\n\n");

    found_number_5();

    return 0;
}

// Functions ..
int found_number_5()
{
    // Definition arrays and counter;
    int arr[10], i;

    // Receive values from the user;
    printf("Please enter 10 numbers : \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
    Ensure that the values are stored in the array;
    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    */

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == 5)
        {
            printf("\nYes i'm found number 5");
        }
    }
    printf("\n\n\n");
}