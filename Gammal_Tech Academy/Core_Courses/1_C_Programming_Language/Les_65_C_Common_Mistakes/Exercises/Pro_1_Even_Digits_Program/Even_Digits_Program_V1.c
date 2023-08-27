

/* >>> Even Digits Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number and the program counts the number of even numbers in each number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void evenDigitsFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);

    evenDigitsFun(number);

    return 0;
}

// Functions ..
// Welcome massage / function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Digits Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Even Digits / function;
void evenDigitsFun(int number)
{
    int lastDig = 0;
    printf("\nEven Digit : ");
    while (number > 0)
    {
        lastDig = number % 10; // Extract the last Digit.
        if (lastDig % 2 == 0)
        {
            printf("%d  ", lastDig);
        }
        number = number / 10; // Remove last Digit.
    }
    printf("\n\n\n");
}