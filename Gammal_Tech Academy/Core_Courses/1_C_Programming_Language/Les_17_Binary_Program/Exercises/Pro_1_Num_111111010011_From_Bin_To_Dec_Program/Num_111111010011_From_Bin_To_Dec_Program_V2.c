

/* >>> Num 111111010011 From Bin To Dec Program ( Version - 2 ) <<< */

/* >>> Convert number (111111010011) from binary to decimal. <<< */

#include <stdio.h>

int binary_to_decimal();

int main(void)
{
    printf("\n\nYou welcome in Num 111111010011 From Bin To Dec Program ( Version - 2 ) ..\n\n");

    binary_to_decimal();


    return 0;
}

// Function ..
int binary_to_decimal()
{
    long long binary = 111111010011;
    int decimal = 0, y = 1;

    while (binary)
    {
        decimal += (binary % 10) * y;
        binary /= 10;
        y *= 2;
    }
    printf("\nThe decimal number is : %d\n\n\n", decimal);

    return 0;
}