

/* >>> Sum And Subtract Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter two values, and prints the sum and the difference as positive values(using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int sumAndSubtractFun(int x, int y, int sumAndSubtract[2]);

int main()
{
    welcomeMassageFun();

    int num_1 = 0, num_2 = 0, sumAndSubtract[2];

    printf("Please enter number 1: ");
    scanf("%d", &num_1);

    printf("Please enter number 2: ");
    scanf("%d", &num_2);

    sumAndSubtractFun(num_1, num_2, sumAndSubtract);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum And Subtract Program ( Version 2 ) ..\n\n");
}

// Sum And Subtract / Function.
int sumAndSubtractFun(int x, int y, int sumAndSubtract[2])
{
    sumAndSubtract[0] = x + y;
    printf("\nSum = %d\n", sumAndSubtract[0]);

    sumAndSubtract[1] = x - y;
    printf("Subtract = %d\n\n", sumAndSubtract[1]);
}