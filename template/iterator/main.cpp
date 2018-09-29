#include "stack.h"
#include <iostream>


using namespace std;
using namespace fk;


int main()
{
  Stack<int> st;
  st.push(10);
  st.push(28);
  st.push(673);
  StackIterator<int> inter(st);
  for(int i=0;i<st.size();i++)
  {
    cout << inter++ << endl;
  }

  return 0;
}
