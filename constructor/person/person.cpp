#include <iostream>
#include "person.h"
#include <string.h>


using namespace std;

Person::Person(char *pN)
{
  if(pN)
  {
    cout << "Constructing +++++" << pN << endl;
    int len = strlen(pN) + 1;
    name = new char[len];
    cout << "name = " << static_cast<void *>(name) << endl;
    memset(name, 0, len);
    strcpy(name, pN);
  }
  else
  {
    name = NULL;
  }
}


Person::~Person()
{
  cout << "Desturcting ----" << endl;
  if(name)
  {
    Print();
    delete [] name;
    name = NULL;
  }
}

void Person::Print()
{
  cout << "pName=" << static_cast<void *>(name) << endl;
}

Person::Person(const Person &p)
{
  cout << "Copy constructor of person" << endl;
  if(p.name)
  {
    int len = strlen(p.name) + 1;
    name = new char[len];
    cout << "name=" << static_cast<void *>(name) << endl;
    memset(name, 0, len);
    memcpy(name, p.name, len);
  }
  else
  {
    name = NULL;
  }
}


Person& Person::operator=(const Person &other)
{
  cout << "operator=" << endl;
  if(&other == this)
  {
    return *this;
  }
  if(name)
  {
    delete []name;
    name = NULL;
  }
  if(other.name)
  {
    int len = strlen(other.name)+1;
    name = new char[len];
    memset(name, 0, len);
    strcpy(name, other.name);
  }
  else
  {
    name = NULL;
  }
  return *this;
}
