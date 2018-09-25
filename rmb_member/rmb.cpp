#include <iostream>
#include "rmb.h"

using namespace std;


RMB RMB::operator+(const RMB& val)
{
  jf += val.jf;
  yuan += val.yuan;
  if(jf >= 100)
  {
    ++yuan;
    jf -= 100;
  }
  return RMB(yuan, jf);
}

bool RMB::operator>(const RMB& val)
{
  bool ret = false;
  if(yuan > val.yuan)
  {
    return true;
  }
  else if(yuan == val.yuan)
  {
    if(jf > val.jf)
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
