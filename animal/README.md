public inheritance:

public and protected can be inherited by derived class.

Dog dog: First create base class(Animal) constructor, then create derived class(Dog) constructor.

Dog::Dog(int age, int weight, string location):Animal(age, location), m_weight(weight)
member initialization list: Cross call base class's constructor to initialization.
