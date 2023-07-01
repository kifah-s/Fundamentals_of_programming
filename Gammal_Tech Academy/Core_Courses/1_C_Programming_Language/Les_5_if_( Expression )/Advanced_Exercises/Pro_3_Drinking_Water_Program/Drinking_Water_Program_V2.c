

/* >>> Drinking Water Program ( Version 2 ) <<< */

/* >>> Drinking water program : In order for athletes to function well, they must drink a large amount of water, and non-athletes also, water is the secret of life.
Required : Write a program if the user drinks less than 3 liters per day, it will print "drink more water", otherwise it will print "good". <<< */

#include <stdio.h>

void welcomeMassageFun();
int waterFun();

int main()
{
    welcomeMassageFun();
    waterFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Drinking Water Program ( Version 2 ) ..\n\n");
}

// Water function;
int waterFun()
{
    int drinking;
    printf("Please enter the water amount drink daily : ");
    scanf("%d", &drinking);

    if (drinking < 3)
    {
        printf("\n\"Drink more water\"\n\n\n");
    }
    else
    {
        printf("\n\"Good\"\n\n\n");
    }
}