#include <iostream>
#include "increase.h"

using namespace std;

Increase::Increase(int val):m_val(val)
{}

Increase::~Increase()
{}

#if MEMBER_FUNC

Increase& Increase::operator++()
{
  ++m_val;
  return *this;
}

Increase Increase::operator++(int)
{
  Increase tmp(m_val); //constructor
  ++m_val;
  return tmp;
}

#else

Increase& operator++(Increase& a)
{
  a.m_val++;
  return a;
}

Increase operator++(Increase& a, int)
{
  Increase tmp(a);
  a.m_val++;
  return tmp;
}


#endif
