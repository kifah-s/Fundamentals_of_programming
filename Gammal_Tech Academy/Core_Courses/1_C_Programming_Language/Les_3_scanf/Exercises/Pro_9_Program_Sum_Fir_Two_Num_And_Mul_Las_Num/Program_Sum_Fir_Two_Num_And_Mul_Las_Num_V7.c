

/* >>> Program Sum First Two Numbers And Multiply Last Numbers ( Version 7 ) <<< */

/* >>> A program that requires the user to enter 4 digits and print the sum of the first two digits in a line and multiply the other two digits in another line <<< */

#include <stdio.h>

void wel_mas_function();

int get_fir_num_fun();
int get_sec_num_fun();
int get_thi_num_fun();
int get_for_num_fun();

int sum_fun(int num_1, int num_2);
int mul_fun(int num_1, int num_2);

int main()
{
    wel_mas_function();

    int num_1 = get_fir_num_fun();
    int num_2 = get_sec_num_fun();
    int num_3 = get_thi_num_fun();
    int num_4 = get_for_num_fun();

    int sum_num1_num2 = sum_fun(num_1, num_2);
    int mul_num3_num4 = mul_fun(num_3, num_4);

    printf("%s",sum_num1_num2);
    printf("%s",mul_num3_num4);


    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Program Sum First Two Numbers And Multiply Last Numbers ( Version 7 ) ..\n\n");
}

// Get first number;
int get_fir_num_fun()
{
    int n_1;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    return n_1;
}

// Get second number;
int get_sec_num_fun()
{
    int n_2;

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    return n_2;
}

// Get third number;
int get_thi_num_fun()
{
    int n_3;

    printf("Enter a third number : ");
    scanf("%d", &n_3);

    return n_3;
}

// Get forth number;
int get_for_num_fun()
{
    int n_4;

    printf("Enter a forth number : ");
    scanf("%d", &n_4);

    return n_4;
}

// Sum function;
int sum_fun(int num_1, int num_2)
{
    int result = num_1 + num_2;
    printf("\nThe result sum of adding the first number and the second number is : %d\n", result);
}

// Multiply function;
int mul_fun(int num_1, int num_2)
{
    int result = num_1 * num_2;
    printf("The result multiply of adding the third number and the fourth number is : %d\n\n\n", result);
}
