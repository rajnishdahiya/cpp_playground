#include <iostream>

using namespace std;

class Base {
  public:
  virtual void f() {
    cout << "base vf" << endl;
  }
};

class Derived: public Base {
  public:
  /*void f() override {
    cout << "derived vf" << endl;
  }*/
  void g() {
    cout << "derived g" << endl;
  }
};

class FurtherDerived: public Derived {
  public:
  void f() final override {
    cout << "further derived vf" << endl;
  }
};

void f(Derived* b) {
  b->f();
}

int main() {
  auto fd = FurtherDerived{};
  f(&fd);
  fd.g();
  return 0;
}