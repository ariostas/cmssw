#include <iostream>

#include "HeterogeneousCore/AlpakaLib/interface/MyClass.h"
#include "HeterogeneousCore/AlpakaLib/interface/alpaka/AlpakaLib.h"

namespace ALPAKA_ACCELERATOR_NAMESPACE::AlpakaLib {

// Not alpaka code, but just to show that linking issue
void myFunction() {
  auto m = MyClass(1);
  std::cout << m.getI() << std::endl;
}
}  // namespace ALPAKA_ACCELERATOR_NAMESPACE::AlpakaLib
