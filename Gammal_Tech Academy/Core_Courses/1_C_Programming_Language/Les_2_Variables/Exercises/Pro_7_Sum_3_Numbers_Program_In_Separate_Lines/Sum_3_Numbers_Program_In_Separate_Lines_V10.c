

/* >>> Sum 3 Numbers Program In Separate Lines - ( Version - 10 ) <<< */

/* >>> A program that records 3 digits and prints the sum of each two digits in a separate line <<< */

#include <stdio.h>

void wel_mas_fun();
// void sum_num_fun(int num_1, int num_2, int num_3);
int sum_one_and_two_num_fun(int num_1, int num_2);
int sum_two_and_tre_num_fun(int num_2, int num_3);
int sum_one_and_tre_num_fun(int num_1, int num_3);

int main()
{
    wel_mas_fun();

    // sum_num_fun(1, 2, 3);

    int num_1 = 1;
    int num_2 = 2;
    int num_3 = 3;

    sum_one_and_two_num_fun(num_1, num_2);

    sum_two_and_tre_num_fun(num_2, num_3);

    sum_one_and_tre_num_fun(num_1, num_3);

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Sum 3 Numbers Program In Separate Lines - ( Version - 10 ) ..\n\n");
}

/* // Sum numbers fuction;
void sum_num_fun(int num_1, int num_2, int num_3)
{
        int num_1 = 1;
        int num_2 = 2;
        int num_3 = 3;

    int result_1 = num_1 + num_2;
    int result_2 = num_2 + num_3;
    int result_3 = num_1 + num_3;

    printf("Result_1 : num_1 + num_2 = %d\n", result_1);
    printf("Result_2 : num_2 + num_3 = %d\n", result_2);
    printf("Result_3 : num_1 + num_3 = %d\n\n\n", result_3);
} */

// Sum one and two numbers fuction;
int sum_one_and_two_num_fun(int num_1, int num_2)
{
    int result_1 = num_1 + num_2;
    printf("Result_1 : num_1 + num_2 = %d\n", result_1);
}

// Sum tow and three numbers fuction;
int sum_two_and_tre_num_fun(int num_2, int num_3)
{
    int result_2 = num_2 + num_3;
    printf("Result_2 : num_2 + num_3 = %d\n", result_2);
}

// Sum one and three numbers fuction;
int sum_one_and_tre_num_fun(int num_1, int num_3)
{
    int result_3 = num_1 + num_3;
    printf("Result_3 : num_1 + num_3 = %d\n\n\n", result_3);
}