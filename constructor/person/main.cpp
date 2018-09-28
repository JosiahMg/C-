#include <iostream>
#include "person.h"


using namespace std;

int main()
{
  Person p("Joe");        /*constructor*/
  Person p3("Tome");      /*constructor*/
  Person p2 = p;          /*copy constructor*/

  p.Print();
  p2.Print();

  p2 = p3;              /*operator=*/

  return 0;
}
