#include <iostream>
#include "fruit.h"

using namespace std;

Fruit::~Fruit(){}

Apple::Apple()
{
  cout << "Apple construtor" << endl;
}

Apple::~Apple()
{
  cout << "Apple destructor" << endl;
}

void Apple::plant()
{
  cout << "Apple plant" << endl;
}

void Apple::grow()
{
  cout << "Apple grow" << endl;
}

void Apple::harvest()
{
  cout << "Apple harvest" << endl;
}

Grape::Grape()
{
  cout << "Grape construtor" << endl;
}

Grape::~Grape()
{
  cout << "Grape destructor" << endl;
}

void Grape::plant()
{
  cout << "Grape plant" << endl;
}
void Grape::grow()
{
  cout << "Grape grow" << endl;
}
void Grape::harvest()
{
  cout << "Grape harvest" << endl;
}


Gardener::Gardener()
{
  apple = NULL;
  grape = NULL;
}

Fruit* Gardener::getFruit(int type)
{
  Fruit *fruit = NULL;
  if(type == APPLE)
  {
    if(apple == NULL)
    {
      apple = new Apple();
    }
    fruit = apple;
  }
  else if(type == GRAPE)
  {
    if(grape == NULL)
    {
      grape = new Grape();
    }
    fruit = grape;
  }
  return fruit;
}
