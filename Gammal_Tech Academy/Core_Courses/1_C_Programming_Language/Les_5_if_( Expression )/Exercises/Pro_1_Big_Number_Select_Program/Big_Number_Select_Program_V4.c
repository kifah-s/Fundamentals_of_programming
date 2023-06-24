

/* >>> Big Number Select Program - ( Version - 4 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is greater than the second, printed "first is the greatest", and if vice versa printed "second is the greatest" <<< */

#include <stdio.h>

void welMasFun();
int firstNumFun();
int secondNumFun();
int bigNumFun(int firstNum, int secondNum);

int main()
{
    welMasFun();

    int firstNumber = firstNumFun();
    int secondNumber = secondNumFun();

    bigNumFun(firstNumber, secondNumber);

    return 0;
}

// Functions..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Big Number Select Program - ( Version - 4 ) ..\n\n");
}

// First number function;
int firstNumFun()
{
    int firstNum;
    printf("Please, enter the first number : ");
    scanf("%d", &firstNum);
    return firstNum;
}

// Second number function;
int secondNumFun()
{
    int secondNum;
    printf("Please, enter the second number : ");
    scanf("%d", &secondNum);
    return secondNum;
}

// Big number function;
int bigNumFun(int firstNum, int secondNum)
{
    if (firstNum > secondNum)
    {
        printf("\nFirst number is the greatest\n\n\n");
    }
    else if (firstNum < secondNum)
    {
        printf("\nSecond number is the greatest\n\n\n");
    }
    else
    {
        printf("\nThe two number equal\n\n\n");
    }
}