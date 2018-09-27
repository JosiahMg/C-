#include "furniture.h"

Sofa::Sofa(int weight):m_weight(weight)
{
  cout << "Sofa construtor" << endl;
}

Bed::Bed(int weight):m_weight(weight)
{
  cout << "Bed construtor" << endl;
}

SofaBed::SofaBed()
{
  cout << "SofaBed construtor" << endl;
}
