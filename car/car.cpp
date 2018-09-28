#include "car.h"


namespace fk{
Car::Car(Engine *e, Wheel *w, string s, int p)
   :engine(e), wheel(w), name(s), price(p)
   {}

void Car::run()
{
  engine->start();
  wheel->roll();
  cout << "Car running" << endl;
}

void Car::stop()
{
  engine->stop();
  cout << "Car stop" << endl;
}

Benchi::Benchi(Engine *e, Wheel *w, string s, int p, Stero *st)
      :Car(e, w, s, p), stero(st)
      {}

void Benchi::musicOn()
{
  Car::run();
  stero->play();
  cout << "music on" << endl;
}

Transformer::Transformer(Engine *e, Wheel *w, string s, int p, bool v)
            : Car(e,w,s,p), val(v)
            {}

void Transformer::fight()
{
  run();
  cout << "Transformer fight" << endl;
}

void Transformer::transform()
{
  run();
  cout << "Transformer transform" << endl;
}
}
