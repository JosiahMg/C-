#include <iostream>
#include "animal.h"

using namespace std;

namespace fk{

  Animal::Animal(int age, string location):m_age(age), m_location(location)
  {
    cout << "Animal constructor" << endl;
  }

  Animal::~Animal(){
    cout << "Animal destructor" << endl;
  }

  int Animal::getAge() const
  {
    return m_age;
  }

  void Animal::setAge(int age)
  {
    m_age = age;
  }

  Cat::Cat(int age, int color, string location):Animal(age, location), m_color(color)
  {
    cout << "Cat constructor" << endl;
  }
  Cat::~Cat()
  {
    cout << "Cat destructor" << endl;
  }

  int Cat::getColor() const
  {
    return m_color;
  }
  void Cat::setColor(int color)
  {
    m_color = color;
  }

  Dog::Dog(int age, int weight, string location):Animal(age, location), m_weight(weight)
  {
    cout << "Dog constructor" << endl;
  }
  Dog::~Dog()
  {
    cout << "Dog destructor" << endl;
  }

  int Dog::getWeight() const
  {
    return m_weight;
  }
  void Dog::setWeight(int weight)
  {
    m_weight = weight;
  }

}
