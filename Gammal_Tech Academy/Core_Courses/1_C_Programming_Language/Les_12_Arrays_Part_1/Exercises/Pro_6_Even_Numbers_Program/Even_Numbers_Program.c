

/* >>> Even Numbers Program <<< */

/* >>> A program in which an array contains 10 numbers and prints the even numbers inside the array. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Even Numbers Program .. \n\n");

    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("Num : %d\n", num[i]);
        }
    }

    printf("\n\n\n");
}