

/* >>> Value (5 OR 8) Program ( Version 2 ) <<< */

/* >>> Find the value (5 | 8). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int orFun(int num1, int num2);

int main()
{
    welcomeMassageFun();

    int num1 = 5;
    int num2 = 8;
    
    int result = orFun(num1, num2);

    printf("5 | 8 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (5 OR 8) Program ( Version 2 ) ..\n\n");
}

// OR Function;
int orFun(int num1, int num2)
{
    int result = num1 | num2;
}