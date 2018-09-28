
base class and derive class have the some function:

class Animal{
  virtual void makeSound() const
  {
    cout << "Animal make sound" << endl;
  }

}

class Dog{
  virtual void makeSound() const
  {
    std::cout << "Dog make sound" << '\n';
  }
}

class Cat{
  virtual void makeSound() const
  {
    std::cout << "Cat make sound" << '\n';
  }
}

class Dog:pulic Animal{}
class Cat:pulic Animal{}

makeSound() is virtual function, we must define the base class destructor virtual function.
virtual ~Animal(){};
