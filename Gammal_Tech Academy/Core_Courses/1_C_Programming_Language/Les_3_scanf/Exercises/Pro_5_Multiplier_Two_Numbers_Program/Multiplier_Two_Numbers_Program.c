

/* >>> Multiplier Two Numbers Program <<< */

/* >>> A program that asks the user to enter two numbers and print the value of their multiplier <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Multiplier Two Numbers Program ..\n\n");

    int n_1,
        n_2,
        result;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    result = n_1 * n_2;

    printf("\nThe result is : %d\n\n\n", result);

    return 0;
}