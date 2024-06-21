#include "HeterogeneousCore/AlpakaLib/interface/MyClass.h"

MyClass::MyClass(int i_in) : i(i_in){};

void MyClass::setI(int i_in) { i = i_in; }

int MyClass::getI() { return i; }
