

/* >>> Example 3 - ( Version - 1 ) <<< */

/* >>> A program that takes an age as input from the user. If it is less than 10 years, “Hello” is printed n times, where n is the entered age. However, if the value is more than 9, “Hello” is printed once. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example 3 - ( Version - 1 ) ..\n\n");

    int age, i;

    printf("Please enter your age : ");
    scanf("%d", &age);
    // printf("%d\n", age);

    if (age < 10)
    {
        for (i = age; i > 0; i--)
        {
            printf("\nHello");
        }
        printf("\n\n\n");
    }
    else
    {
        printf("\nHello\n\n\n");
    }
}