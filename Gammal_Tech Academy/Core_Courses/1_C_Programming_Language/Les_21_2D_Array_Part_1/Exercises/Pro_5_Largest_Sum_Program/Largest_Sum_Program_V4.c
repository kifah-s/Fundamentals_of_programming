

/* >>> Largest Sum Program ( Version 4 ) <<< */

/* >>> A program with 2D array with 15 numbers, that prints every 5 digits in a line and prints the sum of the number of this line and eventually prints the sum of the 3 lines. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *largest_sum();
int comparingBiggestSum();

int main()
{
    welcomeMassageFun();
    comparingBiggestSum();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Sum Program ( Version 4 ) ..\n\n");
}

// largest sum function;
int *largest_sum()
{
    // Definition array;
    int arr[3][5] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3}};

    // Definition counters;
    int i, j, sum = 0;
    static int comparison[3];

    // Prints the array and the sum result of each row in it;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d  ", arr[i][j]);
            sum = sum + arr[i][j];
            comparison[i] = sum;
        }
        printf("|  Result sum this row is : %d", sum);

        /* // Ensure that the line sum result is stored in the comparison variable;
        printf("\ncomparison index %d is : %d", i, comparison[i]);
        */

        sum = 0;
        printf("\n");
    }

    return comparison;
}

// Comparing the biggest sum result function;
int comparingBiggestSum()
{
    int *comparison = largest_sum();

    if (comparison[0] > comparison[1] && comparison[0] > comparison[2])
    {
        printf("\nThe largest sum is : %d", comparison[0]);
    }
    else if (comparison[1] > comparison[0] && comparison[1] > comparison[2])
    {
        printf("\nThe largest sum is : %d", comparison[1]);
    }
    else if (comparison[2] > comparison[0] && comparison[2] > comparison[1])
    {
        printf("\nThe largest sum is : %d", comparison[2]);
    }
    else
    {

        printf("\nThere are equal summation results");
    }

    printf("\n\n\n");
}
