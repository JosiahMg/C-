#include <iostream>
#include "increase.h"

using namespace std;

int main()
{
  Increase val(100);
  Increase val2 = ++val;
  cout << val2.getVal() << endl;
  cout << val.getVal() << endl;

  cout << endl;

  Increase val3 = val++;
  cout << val3.getVal() << endl;
  cout << val.getVal() << endl;
  return 0;
}
