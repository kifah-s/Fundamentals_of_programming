

/* >>> Num 100425 From Oct To Dec Program ( Version - 3 ) <<< */

/* >>> Convert number (100425) from octal to decimal. <<< */

#include <stdio.h>
#include <math.h>

long long convert_octal_to_decimal(int octal_number);

int main()
{

    printf("\n\nYou welcome in Num 100425 From Oct To Dec Program ( Version - 3 ) ..\n\n");

    printf("100425 in octal = %lld in decimal\n\n\n", convert_octal_to_decimal(100425));

    return 0;
}

// Function ..
long long convert_octal_to_decimal(int octal_number)
{
    int decimal_number = 0, i = 0;

    while (octal_number != 0)
    {
        decimal_number = decimal_number + (octal_number % 10) * pow(8, i);
        i++;
        octal_number = octal_number / 10;
    }

    i = 1;

    return decimal_number;
}