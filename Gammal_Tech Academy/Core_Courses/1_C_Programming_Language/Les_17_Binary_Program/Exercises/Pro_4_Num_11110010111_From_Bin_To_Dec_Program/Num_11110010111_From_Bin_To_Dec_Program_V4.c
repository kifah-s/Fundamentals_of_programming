

/* >>> Num 11110010111 From Bin To Dec Program ( Version 4 ) <<< */

/* >>> Convert number (11110010111) from binary to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int binary_to_decimal();

int main()
{
    binary_to_decimal();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 11110010111 From Bin To Dec Program ( Version 4 ) ..\n\n");
}

// binary_to_decimal function;
int binary_to_decimal()
{
    welcomeMassageFun();

    long long binary = 11110010111;
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