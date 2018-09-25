#include <iostream>
#include "rmb.h"

using namespace std;

int main()
{
  RMB val1(2, 50);
  RMB val2(3, 32);

  if(val1 > val2)
  {
    cout << "val1 is more than val2" << endl;
  }
  val1 = val1 + val2;
  val1.display();
  return 0;
}
