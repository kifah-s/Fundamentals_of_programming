

/* >>> Sum From 1 To Num Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from 1 to the number that you enter and prints the total numbers from 1 to the number that you enter (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
int sumFrom1ToNumFun();

int main()
{
    welcomeMassageFun();
    sumFrom1ToNumFun();

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum From 1 To Num Program ( Version 2 ) ..\n\n");
}

// Sum From 1 To Num function;
int sumFrom1ToNumFun()
{
    int i = 1, sum = 0, num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;
    }
    printf("\n\nResult sum numbers from 1 to %d =  %d\n", num, sum);

    printf("\n\n");
}