#ifndef _STACK_H_
#define _STACK_H_

namespace fk{
  template<typename T>
  class Stack{
  public:

    Stack():top(0)
    {
      array[0] = T();
    }
    void push(const T& val);
    T pop();

  private:
    enum { SIZE = 100 };
    T array[SIZE];
    int top;
  };


template<typename T>
void Stack<T>::push(const T& val)
{
  if(top < SIZE)
  {
    array[top++] = val;
  }
}

template<typename T>
T Stack<T>::pop()
{
  if(top>0)
  {
    return array[--top];
  }
  return array[0];
}







}




#endif
