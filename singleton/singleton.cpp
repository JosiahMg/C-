#include "singleton.h"
#include <iostream>


using namespace std;

Singleton* Singleton::instance = NULL;


Singleton::Singleton()
{
  cout << "Constructor +++++" << endl;
}

Singleton::~Singleton()
{
  cout << "Destructor -----" << endl;
}


Singleton* Singleton::getInstance()
{
  if(instance == NULL)
  {
    instance = new Singleton();
  }
  return instance;
}

void Singleton::doSomething()
{
  cout << __func__ << "," << __LINE__ << endl;
}
