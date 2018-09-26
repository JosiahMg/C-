#ifndef _STRING_H_
#define _STRING_H_

#include <iostream>

namespace fk{
  class String {
  public:

    String(const char * = NULL);  //constructor
    ~String();                    //destrctor

    String(const String&);        //copy constructor

    String& operator=(const char*); //String a; a = "hello"
    String& operator=(const String&); //String a; a = b;

    String& operator+=(const char*); //String a; a+="hello"
    String& operator+=(const String&); //String a; a+=b;

    String operator+(const char*) const;  //String a, b; a = b+"hello"
    String operator+(const String&) const; //String a, b; a = a+b

    inline const char* data() const
    {
      return m_data;
    }


  private:
    char *m_data;

  };
}





#endif
