#include "furniture.h"

Sofa::Sofa(int weight):Furniture(weight)
{
  cout << "Sofa construtor" << endl;
}

Bed::Bed(int weight):Furniture(weight)
{
  cout << "Bed construtor" << endl;
}

#if D_VIRTUAL
SofaBed::SofaBed(int weight):Furniture(weight)
#else
SofaBed::SofaBed(int weight):Sofa(weight), Bed(weight)
#endif
{
  cout << "SofaBed construtor" << endl;
}
