

/* >>> Multiplication Of Two Numbers Program - ( Version - 8 ) <<< */

/* >>> A program that  records two numbers in two variables and prints the value of their multiplier <<< */

#include <stdio.h>

int wel_mas_function();
int mul_two_num_fun(int num_1, int num_2);
int res_mul_mas_fun(int result);

int main()
{
    wel_mas_function();
    res_mul_mas_fun(mul_two_num_fun(10, 5));

    return 0;
}

// Functions..

// Welcome massage function;
int wel_mas_function()
{
    printf("\n\nYou welcome in Multiplication Of Two Numbers Program - ( Version - 8 ) ..\n\n");
}

// Multiplication Two Numbers;
int mul_two_num_fun(int num_1, int num_2)
{
    /* int num_1 = 5;
       int num_2 = 10; */
    int result = num_1 * num_2;
    return result;
}

// Result multiplication massage;
int res_mul_mas_fun(int result)
{
    printf("Result Multiplication the two numbers is : %d\n\n\n", result);
}