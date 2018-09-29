#include "stack.h"
#include <iostream>


using namespace std;
using namespace fk;


int main()
{
  Stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  cout << st.pop() << endl;

  return 0;
}
