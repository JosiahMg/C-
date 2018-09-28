#include <iostream>
#include "animal.h"

using namespace std;
using namespace fk;

int main()
{
  Cat cat(1, 1, "home");
  cat.setAge(2);
  cat.setColor(2);

  cout << cat.getLocation() << endl;

  cout << cat.getAge() << " " << cat.getColor() << endl;

  Dog dog(2, 2, "house");
  dog.setAge(3);
  dog.setWeight(3);

  cout << dog.getLocation() << endl;
  cout << dog.getAge() << " " << dog.getWeight() << endl;
  return 0;
}
