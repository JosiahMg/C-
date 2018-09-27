#ifndef _FURNITURE_H_
#define _FURNITURE_H_

#include <iostream>

using namespace std;


class Sofa{
public:
  Sofa(int weight=0);

  void watchTV()
  {
    cout << "watch TV" << endl;
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


class Bed{
public:
  Bed(int weight=0);

  void sleep()
  {
    cout << "sleep" << endl;
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

class SofaBed:public Sofa, public Bed{
public:
  SofaBed();
  void foldout()
  {
    cout << "fold out" << endl;
  }
};


#endif
