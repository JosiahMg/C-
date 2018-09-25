#include <iostream>
#include "singleton.h"

int main()
{
  Singleton::getInstance() -> doSomething();
  return 0;
}
