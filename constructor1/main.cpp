#include <iostream>
#include "student.h"

using namespace std;

void foo(Student stu)
{
  cout << "In func" << __func__ << endl;
}

Student bar()
{
  Student tom("tom", 112);
  return tom;
}

int main(int argc, char const *argv[])
{
  //call Constructor function to create joe
  Student joe("joe", 111);

  //call Constructor copy to create john
  Student john = joe;

  //call Constructor copy to create joe clone
  foo(joe);

  //first call Constructor to create tom in bar() and then creater Constructor copy
  Student hm = bar();
  return 0;
}
