#include <iostream>

using namespace std;

template <typename A, typename B>
struct TwoTypes {
  A a;
  B b;
};

template <typename A, typename B>
using TwoTypes1 = TwoTypes<A, B>;
template <typename A>
using TypeInt = TwoTypes<A, int>;
template <typename A>
using TypeInt1 = TwoTypes1<A, int>;

using DoubleInt = TwoTypes<double, int>;

int main() {
  auto a = TypeInt<double>{};
  return 0;
}