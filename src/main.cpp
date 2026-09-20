#include "algo.hpp"
#include <format>
#include <iostream>
using namespace algo;
int main(int argc, char **argv) {
  int a = 10, b = 2;
  MySwap(a, b);
  std::cout << std::format("a = {}, b = {}", a, b) << std::endl;
  return 0;
}
