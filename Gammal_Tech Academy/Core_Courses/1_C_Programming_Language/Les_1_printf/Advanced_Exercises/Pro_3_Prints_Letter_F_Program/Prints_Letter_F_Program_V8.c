

/* >>> Letter " F " Drawing Program ( Version 8 ) <<< */

/* >>> A program that drawing letter " F " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" F \" Drawing Program ( Version 8 )\n\n"};
    wel_mas_fun(mas);

    
    let_fun("F");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter f function;
void let_fun(char let1[])
{
    printf("\n%s%s%s%s%s%s%s%s%s%s%s%s\n", let1, let1, let1, let1, let1, let1, let1, let1, let1, let1, let1, let1);
    printf("%s\n%s\n%s\n%s\n%s", let1,let1,let1,let1,let1);
    printf("\n%s%s%s%s%s%s%s%s%s%s%s%s\n", let1, let1, let1, let1, let1, let1, let1, let1, let1, let1, let1, let1);
    printf("%s\n%s\n%s\n%s\n%s\n\n\n", let1,let1,let1,let1,let1);
}