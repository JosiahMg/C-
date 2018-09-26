Implement the prefix plus plus(++val) and postfix plus plus(val++):

++val : return val+1, so we can return a object reference.
val++ : return val, so first create a temp object and return it, then increase the original object.

MEMBER_FUNC : 1:class member function
              0:class friend function

#if MEMBER_FUNC
  Increase& operator++(); //prefix  ++val
  Increase operator++(int);  //post val++
#else
  friend Increase& operator++(Increase&);  //prefix ++val
  friend Increase operator++(Increase&, int); //postfix val++
#endif
