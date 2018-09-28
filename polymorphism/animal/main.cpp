#include <iostream>
#include "animal.h"

//virtual function, so call the derive class's function
void func_reference(const Animal& animal)
{
  animal.makeSound();
}

//virtual function, so call the derive class's function
void func_point(const Animal* animal)
{
  animal->makeSound();
}

//Even though virtual function, but call the base class's function
void func_value(const Animal animal)
{
  animal.makeSound();
}

int main()
{
  //if pure virtual, below will be error!!!
  #if PURE_VIRTUAL
  Animal animal;
  #endif

  Dog dog;
  Cat cat;
  func_reference(dog);
  func_reference(cat);

// Animal destructor function must virtual, otherwise the Cat destructor will not be called.
  Animal *pcat = new Cat;
  pcat -> makeSound();
  delete pcat;



}
