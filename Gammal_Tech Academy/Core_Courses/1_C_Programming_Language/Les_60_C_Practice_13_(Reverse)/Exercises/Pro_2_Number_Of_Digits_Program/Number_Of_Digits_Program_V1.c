

/* >>> Number Of Digits Program ( Version 1 ) <<< */

/* >>>  <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void printNumberOfDigitsFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    printNumberOfDigitsFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Of Digits Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print Number Of Digits / function;
void printNumberOfDigitsFun(int number)
{
    int counter = 0;
    while (number > 0)
    {
        number /= 10; // number = number / 10;
        counter++;
    }
    printf("\n%d\n\n", counter);
}
