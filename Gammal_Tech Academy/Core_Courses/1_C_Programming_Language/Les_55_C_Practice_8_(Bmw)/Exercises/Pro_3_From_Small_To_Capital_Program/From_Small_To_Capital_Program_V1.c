

/* >>> From Small To Capital Program ( Version 1 ) <<< */

/* >>>  <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getSmallLetterFun(char smallLetter);
char fromSmallToCapitalFun(char smallLetter);

int main()
{
    welcomeMassageFun();

    char smallLetter;
    smallLetter = getSmallLetterFun(smallLetter);
    // printf("\n%c\n\n", smallLetter);

    char capitalLetter;
    capitalLetter = fromSmallToCapitalFun(smallLetter);
    printf("\n%c\n\n", capitalLetter);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Small To Capital Program ( Version 1 ) ..\n\n");
}

// Get small letter function;
char getSmallLetterFun(char smallLetter)
{
    printf("Please enter a small letter: ");
    scanf("%c", &smallLetter);

    return smallLetter;
}

// Change from small letter to capital letter function;
char fromSmallToCapitalFun(char smallLetter)
{
    smallLetter -= 32;

    /* return smallLetter; */
}