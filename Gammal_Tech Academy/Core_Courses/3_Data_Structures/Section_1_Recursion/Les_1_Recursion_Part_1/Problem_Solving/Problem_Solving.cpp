

//* >>>>> Problem Solving <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

int findNthNumber(int x, int y, int n)
{
    if (n == 1)
    {
        return x;
    }
    if (n == 2)
    {
        return y;
    }

    return findNthNumber(x, y, n - 1) + findNthNumber(x, y, n - 2);
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    //* ________________________________________________________________

    int t, x, y, n;

    cout << "Please enter a number: ";
    cin >> t;

    while (t--)
    {
        cout << "Please enter numbers: ";
        cin >> x >> y >> n;
        cout << findNthNumber(x, y, n) << endl;
    }

    //* ________________________________________________________________

    cout << "\n";

    return 0;
}
