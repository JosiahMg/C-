#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student
{
public:
  Student(const char* pName = "NA", int ssId = 0);
  ~Student();

  Student(const Student& s);

  void print();

private:
  char name[40];
  int id;
};




#endif
