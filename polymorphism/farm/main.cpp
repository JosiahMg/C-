#include <iostream>
#include "fruit.h"

using namespace std;

int main()
{
  Gardener tom;

  Fruit *fruit = tom.getFruit(APPLE);
  fruit->plant();
  fruit->grow();
  fruit->harvest();
  return 0;
}
