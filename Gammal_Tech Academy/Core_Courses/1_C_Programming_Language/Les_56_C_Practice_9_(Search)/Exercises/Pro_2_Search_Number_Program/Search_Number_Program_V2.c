

/* >>> Search Number Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number to search for it and enters a set of numbers until it enters 0.
   Required: search the occurrence of the first number in the set of numbers entered. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberForSeaItFun();
int getSetOfNumbersFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberForSeaItFun();
    /* printf("\n%d\n\n", number); */

    // other way ....
    getSetOfNumbersFun(number);
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Search Number Program ( Version 2 ) ..\n\n");
}

// Get number for search it / function;
int getNumberForSeaItFun()
{
    int number = 0;
    printf("Please enter a number for search it: ");
    scanf("%d", &number);

    return number;
}

// Get set of numbers / function;
int getSetOfNumbersFun(int number)
{
    int num = 1, counter = 0;

    do
    {
        printf("Please enter a number: ");
        scanf("%d", &num);

        if (num == number)
        {
            counter++;
        }
    } while (num != 0);

    if (counter > 0)
    {
        printf("\nThe number of iterations of the number %d is: %d\n\n\n", number, counter);
    }
}
