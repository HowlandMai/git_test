#include <vector>
namespace algo {

template <typename T> void MySwap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

int BinarySearch(const std::vector<int> &nums, int target);

} // namespace algo