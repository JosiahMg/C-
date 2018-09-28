#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>


#define PURE_VIRTUAL 0


using namespace std;

class Animal{
public:
  Animal(){};
  //must be virtual, otherwise will be memory leak
  virtual ~Animal(){};

#if PURE_VIRTUAL

  virtual void makeSound() const = 0;

#else
  //must be "virtual" to polymorphism
  virtual void makeSound() const
  {
    cout << "Animal make sound" << endl;
  }
#endif

};

class Dog:public Animal{
public:
  Dog(){}
  ~Dog(){}

  virtual void makeSound() const
  {
    std::cout << "Dog make sound" << '\n';
  }
};

class Cat:public Animal{
public:
  Cat(){}
  ~Cat(){}

  virtual void makeSound() const
  {
    std::cout << "Cat make sound" << '\n';
  }
};



#endif
