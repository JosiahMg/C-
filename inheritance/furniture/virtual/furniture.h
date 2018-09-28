#ifndef _FURNITURE_H_
#define _FURNITURE_H_

#include <iostream>


#define D_VIRTUAL   1


using namespace std;

class Furniture {
public:
  Furniture(int weight)
  {
    cout << "Furniture constructor" << endl;
    m_weight = weight;
  }

  void setWeight(int weight)
  {
    m_weight = weight;
  }

  int getWeight() const
  {
    return m_weight;
  }

private:
  int m_weight;


};

#if D_VIRTUAL
class Sofa:virtual public Furniture
#else
class Sofa:public Furniture
#endif
{
public:
  Sofa(int weight=0);

  void watchTV()
  {
    cout << "watch TV" << endl;
  }
};

#if D_VIRTUAL
class Bed:virtual public Furniture
#else
class Bed:public Furniture
#endif
{
public:
  Bed(int weight=0);

  void sleep()
  {
    cout << "sleep" << endl;
  }

};

class SofaBed:public Sofa, public Bed{
public:
  SofaBed(int weight);
  void foldout()
  {
    cout << "fold out" << endl;
  }
};


#endif
