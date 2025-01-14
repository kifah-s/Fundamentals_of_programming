

/* >>> Student Groups Program ( Version 5 ) <<< */

/* >>> A program in which array of char 3D has 3 groups each group 3 students and each student's name does not have more than 20 characters.. Students' names are required to be entered and each group printed in a line. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int numberOfGroupsFun();
int numberOfStudentFun();
int Student_Groups();

int main()
{
    welcomeMassageFun();

    Student_Groups();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Student Groups Program ( Version 5 ) ..\n\n");
}

// get number of groups function;
int numberOfGroupsFun()
{
    // Declaration variable;
    int groups;

    // Receive values from the user;
    printf("Please enter the number of groups : ");
    scanf("%d", &groups);

    return groups;
}

// get number of student function;
int numberOfStudentFun()
{
    // Declaration variable;
    int student;

    // Receive values from the user;
    printf("Please enter the number of student : ");
    scanf("%d", &student);

    return student;
}

// Student Groups function;
int Student_Groups()
{
    int groups = numberOfGroupsFun();
    int student = numberOfStudentFun();

    // Declaration counters;
    int i, j;

    // Declaration array of characters;
    char name[groups][student][20];

    // Receive values from the user;
    printf("Please enter ' %d ' names : \n", groups * student);
    for (i = 0; i < groups; i++)
    {
        for (j = 0; j < student; j++)
        {
            scanf("%s", name[i][j]);
        }
    }

    // Printing names;
    printf("\nnames is : \n");
    for (i = 0; i < groups; i++)
    {
        for (j = 0; j < student; j++)
        {
            printf("%s  ", name[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}