

/* >>> Positive Or Negative Program ( Version 1 ) <<< */

/* >>> A program that verifies if the entered number is odd or even. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
void PosOrNegFun(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    PosOrNegFun(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Or Negative Program ( Version 1 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Positive Or Negative / Function.
void PosOrNegFun(int x)
{
    if (x % 2 == 0)
    {
        printf("\n%d is Positive.\n\n", x);
    }
    else if (x % 2 == 1)
    {
        printf("\n%d is Negative.\n\n", x);
    }
}