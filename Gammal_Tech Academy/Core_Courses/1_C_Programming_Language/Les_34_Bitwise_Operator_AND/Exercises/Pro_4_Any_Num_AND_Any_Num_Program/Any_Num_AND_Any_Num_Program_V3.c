

/* >>> Any Num AND Any Num Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter two values, then it prints the result of & between these two numbers. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int andFun();

int main()
{
    welcomeMassageFun();

    andFun();

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num AND Any Num Program ( Version 3 ) ..\n\n");
}

// And Function;
int andFun()
{
    int num1 = 0;
    int num2 = 0;

    printf("Please enter number 1 : ");
    scanf("%d", &num1);
    printf("Please enter number 2 : ");
    scanf("%d", &num2);

    int result = num1 & num2;

    printf("\n%d & %d = %d\n\n", num1, num2, result);
}