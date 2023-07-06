

/* >>> Year Salary Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter the value of his monthly salary and then calculates the value of his annual salary and prints it on the screen. <<< */

#include <stdio.h>

void welMasFun();
int monthSalaryFun();
int yearSalaryFun(int month);

int main()
{
    welMasFun();
    int month = monthSalaryFun();
    yearSalaryFun(month);

    return 0;
}

// Functions ..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Year Salary Program ( Version 4 ) ..\n\n");
}

// Month salary function;
int monthSalaryFun()
{
    int month;
    printf("The month salary : ");
    scanf("%d", &month);
    return month;
}
// Year salary function;
int yearSalaryFun(int month)
{
    int year;

    year = month * 12;
    printf("\nThe year salary : %d $\n\n\n", year);
}