#include <iostream>
#include <functional>

int main() {
  [out = std::ref(std::cout<<"Hello ")](){out.get() << "World\n";}();
  return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}
