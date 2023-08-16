

/* >>> Largest Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two numbers and print the largest in them (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("\n\nYou welcome in Largest Program ( Version 2 ) ..\n\n");

    int firstNum = 0, secondNum = 0;

    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    /* firstNum > secondNum ? printf("\nLargest : %d\n\n", firstNum) : printf("\nLargest : %d\n\n", secondNum); */

    printf(firstNum > secondNum ? "\nLargest : %d\n\n" : "\nLargest : %d\n\n",firstNum, secondNum);

    return 0;
}
