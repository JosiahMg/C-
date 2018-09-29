#include <iostream>

using namespace std;





namespace fk{

  template<typename T>
  T min(T a, T b)
  {
    return (a<b)?a:b;
  }

  class Test{
  public:
    Test(){}
  };


  template<typename T>
  class Example{
  public:
    Example(T val):m_val(val)
    {}
    ~Example(){}

    void set(T val)
    {
      m_val = val;
    }
    T get() const
    {
      return m_val;
    }
  private:
    T m_val;
  };
}


int main()
{

  float c = 1.2;
  float d = 123.3;
  fk::Example<int> val(10);
  cout << val.get() << '\n';

  val.set(100);
  cout << val.get() << endl;

  cout << "---------" << endl;

  cout << min(c,d) << endl;

  fk::Test test;
  fk::Example<fk::Test> cval(test);

  return 0;
}
