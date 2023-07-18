

/* >>> Calculator Program ( Version 6 ) <<< */

/* >>> A program calculator that performs operations (combination, subtraction, multiplication and division) using the functions. <<< */

#include <stdio.h>

int combination();
int subtraction();
int multiplication();
int division();

int main()
{
    printf("\n\nYou welcome in Calculator Program ( Version 6 ) .. \n\n");

    char cal;

    printf("Please choose the calculation you want to perform ( + , - , * , / ) ? ");
    scanf("%c", &cal);

    if (cal == '+')
    {
        int com = combination();
        printf("\nResult is : %d\n\n\n", com);
    }
    else if (cal == '-')
    {
        int sub = subtraction();
        printf("\nResult is : %d\n\n\n", sub);
    }
    else if (cal == '*')
    {
        int mul = multiplication();
        printf("\nResult is : %d\n\n\n", mul);
    }
    else if (cal == '/')
    {
        int div = division();
        printf("\nResult is : %d\n\n\n", div);
    }

    return 0;
}

// Functions ..
// combination function;
int combination()
{
    int x, y, result;

    printf("\nPlease enter the two numbers you want sum ..\n");

    printf("First number : ");
    scanf("%d", &x);

    printf("Second number : ");
    scanf("%d", &y);

    result = x + y;
    return result;
}

// subtraction function;
int subtraction()
{
    int x, y, result;

    printf("\nPlease enter the two numbers you want subtraction ..\n");

    printf("First number : ");
    scanf("%d", &x);

    printf("Second number : ");
    scanf("%d", &y);

    result = x - y;
    return result;
}

// multiplication function;
int multiplication()
{
    int x, y, result;

    printf("\nPlease enter the two numbers you want multiplication ..\n");

    printf("First number : ");
    scanf("%d", &x);

    printf("Second number : ");
    scanf("%d", &y);

    result = x * y;
    return result;
}

// division function;
int division()
{
    int x, y, result;

    printf("\nPlease enter the two numbers you want division ..\n");

    printf("First number : ");
    scanf("%d", &x);

    printf("Second number : ");
    scanf("%d", &y);

    result = x / y;
    return result;
}