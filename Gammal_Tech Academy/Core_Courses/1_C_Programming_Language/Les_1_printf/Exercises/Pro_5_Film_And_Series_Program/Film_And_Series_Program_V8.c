

/* >>> Film And Series Program ( Version 8 ) <<< */

/* >>> Film And Series Program : On weekly vacation you can spend some time watching your favorite films and series that you haven't seen yet..
Required: Write a program that prints the names of your favorite films and series you want to watch. <<< */

#include <stdio.h>

char *welcome_massage_fun();
char *favorite_films_fun();
char *breaking_fun();
char *attack_fun();

int main()
{
    printf(welcome_massage_fun());
    printf(favorite_films_fun());
    printf(breaking_fun());
    printf(attack_fun());

    return 0;
}

// Welcome massage function;
char *welcome_massage_fun()
{
    char *wel_mas[] = {"\n\nYou welcome in Film And Series Program ( Version 8 ) ..\n"};

    return *wel_mas;
}

// favorite films function;
char *favorite_films_fun()
{
    char *favorite[] = {"\nMy favorite films and series is :\n"};

    return *favorite;
}

// Breaking function;
char *breaking_fun()
{
    char *breaking[] = {"- Breaking bad\n"};

    return *breaking;
}

// Attack function;
char *attack_fun()
{
    char *attack[] = {"- Attack on titan\n\n\n"};

    return *attack;
}