

/* >>> Daily Planning Program ( Version 11 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

char *welcome_massage();
char *daily_program();
char *university_fun();
char *english_fun();
char *study_fun();
char *gym_fun();
char *private_fun();
char *sleeping_fun();
char *dreams_fun();

int main()
{
    char *wel_mas[] = {welcome_massage()};
    printf(*wel_mas);

    char *dai[] = {daily_program()};
    printf(*dai);

    char *uni[] = {university_fun()};
    printf(*uni);

    char *eng[] = {english_fun()};
    printf(*eng);

    char *stu[] = {study_fun()};
    printf(*stu);

    char *gym[] = {gym_fun()};
    printf(*gym);

    char *pri[] = {private_fun()};
    printf(*pri);

    char *sle[] = {sleeping_fun()};
    printf(*sle);

    char *dre[] = {dreams_fun()};
    printf(*dre);

    return 0;
}

// Functions ..

// Welcome massage function;
char *welcome_massage()
{
    char *wel_mas[] = {"\n\nYou welcome in Daily Planning Program ( Version 11 ) ..\n\n"};

    return *wel_mas;
}

// Daily program function;
char *daily_program()
{
    char *daily[] = {"My daily program is : \n"};

    return *daily;
}

// University function;
char *university_fun()
{
    char *uni[] = {"1 - University study from 5 am to 7 am.\n"};

    return *uni;
}

// English function;
char *english_fun()
{
    char *eng[] = {"2 - English study from 7 am to 9 am.\n"};

    return *eng;
}

// Study function;
char *study_fun()
{
    char *stu[] = {"3 - Study and work in programming from 9 am to 5 pm.\n"};

    return *stu;
}

// Gym function;
char *gym_fun()
{
    char *gym[] = {"4 - Go to the gym from 5 pm to 7 pm.\n"};

    return *gym;
}

// Private function;
char *private_fun()
{
    char *pri[] = {"5 - This is my private time from 7 pm to 10 pm.\n"};

    return *pri;
}

// Sleeping function;
char *sleeping_fun()
{
    char *sle[] = {"6 - This is sleeping time 10 pm.\n"};

    return *sle;
}

// Dreams function;
char *dreams_fun()
{
    char *dre[] = {"And happy dreams\n\n\n"};

    return *dre;
}