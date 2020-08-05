#include <iostream>

using namespace std;

template <typename T>
struct A {
  constexpr T t;
};

struct B {
  constexpr int t;
};

int main() {
  return 0;
}