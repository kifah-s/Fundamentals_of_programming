

/* >>> Sum First Two Numbers Program Multiplied Third Number - ( Version - 1 ) <<< */

/* >>> A program that asks the user to enter 3 digits and print the sum of the first two digits multiplied by the third number <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Sum First Two Numbers Program Multiplied Third Number - ( Version - 1 ) ..\n\n");

    int n_1,
        n_2,
        n_3,
        result_1;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    printf("Enter the third number : ");
    scanf("%d", &n_3);

    result_1 = n_1 + n_2;

    printf("\nResult is : %d\n\n\n", result_1 * n_3);

    return 0;
}