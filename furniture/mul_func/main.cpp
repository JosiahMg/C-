#include <iostream>
#include "furniture.h"

using namespace std;

int main()
{
  SofaBed sofabed;
  sofabed.watchTV();
  sofabed.sleep();
  sofabed.foldout();

  sofabed.Sofa::setWeight(100);
  cout << sofabed.Sofa::getWeight() << endl;

  cout << sofabed.Bed::getWeight() << endl;
  sofabed.Bed::setWeight(10);
  cout << sofabed.Bed::getWeight() << endl;

}
