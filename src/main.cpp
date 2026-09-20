#include "algo.hpp"
#include <format>
#include <iostream>
int main(int argc, char **argv) {
  std::cout << "hello world!" << std::endl;
  int a = 10, b = 2;
  myswap(a, b);
  std::cout << std::format("a = {}, b = {}", a, b) << std::endl;
  return 0;
}
