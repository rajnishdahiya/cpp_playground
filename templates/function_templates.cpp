#include <iostream>

using namespace std;

template <typename T>
void f(T x) {
  cout << typeid(T).name() << endl;
  x++;
}

int main() {
  auto x = 0;
  int& y = x;
  f<int&>(y);
  cout << x << endl;
  return 0;
}