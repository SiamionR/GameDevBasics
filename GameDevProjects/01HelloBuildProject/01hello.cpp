#include <iostream>
#include <cstdlib>
#include <functional>

int main() {
  std::cout << "Hello World!" << std::endl;
  return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}
