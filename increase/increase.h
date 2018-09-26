#ifndef _INCREASE_H_
#define _INCREASE_H_

#define MEMBER_FUNC 0


class Increase
{
public:
  Increase(int);
  ~Increase();

#if MEMBER_FUNC
  Increase& operator++(); //prefix  ++val
  Increase operator++(int);  //post val++
#else
  friend Increase& operator++(Increase&);  //prefix ++val
  friend Increase operator++(Increase&, int); //postfix val++
#endif

  int getVal() const
  {
    return m_val;
  }

private:
  int m_val;
};


#endif
