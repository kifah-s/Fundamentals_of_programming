

/* >>> Printing largest Number Program - ( Version - 2 ) <<< */

/* >>> A program that asks a person to enter two digits and print the largest between them <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Printing Largest Number Program - ( Version - 2 ) ..\n\n");

    int x, y;

    printf("Please, enter the first number : ");
    scanf("%d", &x);

    printf("Please, enter the second number : ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("\n%d\n\n\n", x);
    }
    else if (x < y)
    {
        printf("\n%d\n\n\n", y);
    }
    else
    {
        printf("\n%d = %d\n\n\n", x, y);
    }

    return 0;
}