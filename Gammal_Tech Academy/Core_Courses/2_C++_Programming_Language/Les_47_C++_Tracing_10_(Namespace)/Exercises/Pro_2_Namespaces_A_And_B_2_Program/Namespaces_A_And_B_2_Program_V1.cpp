

/* >>> Namespaces A And B 2 Program ( Version 1 ) <<< */

/* >>> Write a C++ program that defines two namespaces, "A" and "B".
In the "A" namespace, define a function "foo" that prints the string "Hello from namespace A".
In the "B" namespace, define a function "foo" that prints the string "Hello from namespace B".
In the main function, call both "foo" functions and observe the output. <<< */



#include "namespaces_A_And_B.h"


// ... Namespaces ...
// Create namespace A.
// namespace A
// {
//      void foo()
//      {
//           cout << "Hello from namespace A" << endl;
//      }
// }

// Create namespace B.
// namespace B
// {
//      void foo()
//      {
//           cout << "Hello from namespace B" << endl;
//      }
// }

// using namespace A;
// using namespace B;
// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Namespaces A And B 2 Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     A::foo();
     cout << endl;
     B::foo();

     cout << endl
          << endl;

     return 0;
}