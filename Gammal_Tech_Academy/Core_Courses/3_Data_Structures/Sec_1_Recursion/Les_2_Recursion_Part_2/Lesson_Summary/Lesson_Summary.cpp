
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << "\nLesson Summary ..\n\n";
}

//
int fibonacciRecFun(int x)
{
    if (x < 2)
    {
        return x;
    }
    else
    {
        return fibonacciRecFun(x - 1) + fibonacciRecFun(x - 2);
    }
}

//* End Functions ..

int main()
{
    lessonSummaryFun();

    // Declare Variable.
    int x = 6;

    // Call recursive function and print value.
    cout << "Fibo " << x << ": " <<  fibonacciRecFun(x);

    cout << "\n\n";

    return 0;
}
