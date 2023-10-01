

// >>> Sum First And Second Program ( Version 1 ) <<< */

/* >>> Create a pair of two integers, and print out the first and second elements. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
int sumFirstAndSecondFun(pair<int, int> x, int s);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<int, int> myFirstPair = {5, 5};
     int sum = 0;
     // ... End Variables ...

     // ... Functions ...
     sum = sumFirstAndSecondFun(myFirstPair, sum);
     // ... End Functions ...

     cout << "Sum First And Second is: " << sum << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Sum First And Second Program ( Version 1 ) .." << endl
          << endl;
}

// Sum First And Second / Function.
int sumFirstAndSecondFun(pair<int, int> x, int s)
{
     s = x.first + x.second;

     return s;
}
// ... End Functions ...