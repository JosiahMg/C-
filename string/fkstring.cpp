#include <iostream>
#include <string.h>
#include "fkstring.h"
using namespace std;


namespace fk{

  String::String(const char *str)
  {
    if(str == NULL)
    {
      m_data = new char[1];
      *m_data = '\0';
    }
    else
    {
      int len = strlen(str)+1;
      m_data = new char[len];
      memset(m_data, 0, len);
      strcpy(m_data, str);
    }
  }

  String::~String()
  {
    delete[] m_data;
  }

  String::String(const String &other)
  {

    int len = strlen(other.m_data) + 1;
    m_data = new char[len];
    memset(m_data, 0, len);
    strcpy(m_data, other.m_data);
  }

  String&  String::operator=(const String& other)
  {
    if(this == &other)
    {
      return *this;
    }
    delete[] m_data;

    int len = strlen(other.m_data) + 1;
    m_data = new char[len];
    memset(m_data, 0, len);
    strcpy(m_data,other.m_data);
    return *this;
  }

  String& String::operator=(const char *other)
  {
    delete[] m_data;
    if(other == NULL)
    {
      m_data = new char[1];
      *m_data = '\0';
    }
    else
    {
      int len = strlen(other)+1;
      m_data = new char[len];
      memset(m_data,0,len);
      strcpy(m_data,other);
    }
    return *this;
  }

  String& String::operator+=(const String& other)
  {
    char *tmp = m_data;
    int len = strlen(m_data) + strlen(other.m_data) + 1;
    m_data = new char[len];
    memset(m_data,0,len);
    strcpy(m_data,tmp);
    strcat(m_data,other.m_data);
    delete[] tmp;
    return *this;
  }

  String& String::operator+=(const char *other)
  {
    String tmp(other);
    *this += tmp;
    return *this;
  }

  String String::operator+(const String& other) const
  {
    String result;
    result += *this;
    result += other;
    return result;
  }

  String String::operator+(const char *other) const
  {
    String result;
    result += *this;
    result += other;
    return result;
  }



}
