

/* >>> Example 1 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[25] = "Amr", y[] = " Mohamed";
    
    strcat(x, y);

    printf("\n%s\n\n", x);

    return 0;
}