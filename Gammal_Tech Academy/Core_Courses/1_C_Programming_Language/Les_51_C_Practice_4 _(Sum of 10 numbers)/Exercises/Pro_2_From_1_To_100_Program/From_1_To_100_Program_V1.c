

/* >>> From 1 To 100 Program ( Version 1 ) <<< */

/* >>>  <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int sum100NumbersFun();

int main()
{
    welcomeMassageFun();

    sum100NumbersFun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum 5 Numbers Program ( Version 1 ) ..\n\n");
}

// sum 100 numbers function;
int sum100NumbersFun()
{
    int num = 100, sum = 0;
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("\nSum all numbers = %d : ", sum);
    printf("\n\n\n");
}