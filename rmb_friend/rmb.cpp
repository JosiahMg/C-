#include <iostream>
#include "rmb.h"

using namespace std;


RMB operator+(const RMB& val1, const RMB& val2)
{
  uint jf = val1.jf + val2.jf;
  uint yuan = val1.yuan + val2.yuan;
  if(jf >= 100)
  {
    ++yuan;
    jf -= 100;
  }
  return RMB(yuan, jf);
}

bool operator>(const RMB& val1, const RMB& val2)
{
  bool ret = false;
  if(val1.yuan > val2.yuan)
  {
    return true;
  }
  else if(val1.yuan == val2.yuan)
  {
    if(val1.jf > val2.jf)
    {
      return true;
    }
  }
  return ret;
}

RMB::RMB(uint y, uint val):yuan(y), jf(val)
{
  cout << "constructor create" << endl;
}
RMB::~RMB()
{
  cout << "destructor create" << endl;
}
