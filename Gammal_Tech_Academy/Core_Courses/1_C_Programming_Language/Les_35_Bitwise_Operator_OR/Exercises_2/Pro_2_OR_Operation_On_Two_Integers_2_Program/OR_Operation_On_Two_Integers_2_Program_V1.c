

//* OR Operation On Two Integers 2 Program (Version 1).

/*
 * Write a program that takes two integers as input from
 * the user, performs bitwise OR operation between them, and prints the result.
 */

/*
! Input:
! Please enter first number: 5
! Please enter second number: 6

! Output:
! Result of bitwise OR operation between 5 and 6: 7
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int n1);
int gettingSecondNumberFun(int n2);
int resultOROperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0, result = 0;

    // Calling Functions.
    num1 = gettingFirstNumberFun(num1);
    num2 = gettingSecondNumberFun(num2);
    result = resultOROperationFun(num1, num2, result);

    // Print result.
    printf("Result of bitwise OR operation between %d and %d: %d", num1, num2, result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in OR Operation On Two Integers 2 Program (Version 1) ..\n\n");
}

// Getting first number - Function.
int gettingFirstNumberFun(int n1)
{
    printf("Please enter first number: ");
    scanf("%d", &n1);

    return n1;
}

// Getting second number - Function.
int gettingSecondNumberFun(int n2)
{
    printf("Please enter second number: ");
    scanf("%d", &n2);

    return n2;
}

// Result OR Operation - Function.
int resultOROperationFun(int n1, int n2, int res)
{
    res = n1 | n2;

    return res;
}
//* End Function ..
