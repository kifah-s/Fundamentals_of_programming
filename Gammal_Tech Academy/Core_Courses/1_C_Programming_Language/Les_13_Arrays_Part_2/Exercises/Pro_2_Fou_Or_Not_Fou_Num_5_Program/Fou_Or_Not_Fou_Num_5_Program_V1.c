

/* >>> Found Or Not Found Number 5 Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and if he does not find a print "not found" and after the program is finished, it will be reinstated on its own. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Found Or Not Found Number 5 Program ( Version 1 ) .. \n\n");

    while (1)
    {
        int arr[10], i;

        printf("Please enter ten numbers\n");
        for (i = 0; i < 10; i++)
        {
            printf("Number %d : ", i + 1);
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < 10; i++)
        {
            if (arr[i] == 5)
            {
                printf("\nNumber 5 Found\n\n\n");
                break;
            }
        }
        if (arr[i] != 5)
        {
            printf("\nNumber 5 Not Found\n\n\n");
        }
    }

    return 0;
}