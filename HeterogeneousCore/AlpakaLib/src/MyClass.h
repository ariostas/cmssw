#ifndef MyClass_h
#define MyClass_h

#include <iostream>

class MyClass {
 private:
  int i;

 public:
  MyClass(int i_in);
  void setI(int i_in);
  int getI();
};

#endif
