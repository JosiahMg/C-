#include <iostream>
#include "fkstring.h"


using namespace std;
using namespace fk;

int main()
{
  String s1 = "hello";
  String s2("world");
  cout << "s1=" << s1.data() << endl;
  cout << "s2=" << s2.data() << endl;


  String s3;
  s3 = s1 + " " + s2;
  cout << "s3=" << s3.data() << endl;


  String s4;
  s4 = s1;
  s4 += " ";
  s4 += s2;
  cout << "s4=" << s4.data() << endl;
  

  return 0;
}
