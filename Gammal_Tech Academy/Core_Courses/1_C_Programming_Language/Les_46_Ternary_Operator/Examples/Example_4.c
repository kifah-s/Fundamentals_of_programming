

/* >>> Example 4 <<< */

#include <stdio.h>

int main()
{
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    x % 2 == 0 ? printf("even") : NULL;

    return 0;
}