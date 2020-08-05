#include<iostream>

using namespace std;

void h(double) {
  cout << "double" << endl;
}

template<typename T>
void f(T t) {
  g(t);
};

struct A {};

void g(A) {
  cout << "A" << endl;
}

void g(int) {
  cout << "int" << endl;
}

int main() {
  A a{};
  f(a);
  f(1);
  //f(1.1);
  return 0;
}
