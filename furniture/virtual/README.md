multiple inheritance

There are several some function in multiple base classes,we can rewrite the class as follow:


we can designed that : CLASS A is inheriting CLASS X and CLASS Y,
CLASS X and CLASS Y is inheriting CLASS Z, put the some function in CLASS Z.


#define D_VIRTUAL   1

D_VIRTUAL:control virtual

#if D_VIRTUAL
SofaBed::SofaBed(int weight):Furniture(weight)
#else
SofaBed::SofaBed(int weight):Sofa(weight), Bed(weight)

#if D_VIRTUAL
class Bed:virtual public Furniture
#else
class Bed:public Furniture
#endif

#if D_VIRTUAL
class Sofa:virtual public Furniture
#else
class Sofa:public Furniture
#endif
