#include <iostream>
#include "student.h"
#include <string.h>


using namespace std;

Student::Student(const char *pName, int ssId):id(ssId)
{
  memset(name, 0, 40);
  if(pName)
  {
    int len = strlen(pName);
    len = (len>39)? 39 : len;
    strncpy(name, pName, len);
  }
  cout << "Constructor ++++++" << name << endl;
}


Student::~Student()
{
  cout << "Desturcting ------" << endl;
}

void Student::print()
{
  cout << "student name = " << name << endl;
}

Student::Student(const Student& s)
{
  strcpy(name, "copy");
  strcat(name, s.name);
  id = s.id;
  cout << "Constructor " << name << endl;
}
