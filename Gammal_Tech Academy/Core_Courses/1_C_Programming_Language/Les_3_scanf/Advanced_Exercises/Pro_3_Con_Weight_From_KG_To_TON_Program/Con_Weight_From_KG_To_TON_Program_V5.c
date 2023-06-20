

/* >>> Convert Weight From KG To TON Program ( Version 5 ) <<< */

/* >>> Program that converts weight from kg to ton (ton = 1000 kg). <<< */

#include <stdio.h>

void welMasFun();
int kgFun();
int fromKGtoTON(int weight);

int main()
{
    welMasFun();
    

    printf("\nYour weight in TON : %d ton\n\n\n", fromKGtoTON(kgFun()));
    

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Convert Weight From KG To TON Program ( Version 5 ) ..\n\n");
}

// KG function;
int kgFun()
{
    int weight;

    printf("Enter your weight in KG : ");
    scanf("%d", &weight);
    return weight;
}

// Convert Weight From KG To TON function;
int fromKGtoTON(int weight)
{
    weight = weight * 1000;

    //printf("\nYour weight in TON : %d ton\n\n\n", weight);

    return weight;
}