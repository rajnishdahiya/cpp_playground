#include <iostream>

using namespace std;

class B {
  protected:
  B(const B& b): i(b.i) {
    cout << "B copy ctor" << endl;
  }
  public:
  B(): i{} {
    cout << "B ctor" << endl;
  }
  B(int j): i(j) {
    cout << "B(j) ctor" << endl;
  }
  //B(const B& b) = delete;
  
  ~B() {
    cout << "B dtor" << endl;
  }
  public:
  int i;
};
class A: B {
  public:
  A() {
    cout << "A ctor" << endl;
  }
  A(int j): B{j}, i(j) {
    cout << "A ctor(j)" << endl;
  }
  A(const A& a): i(a.i) {
    cout << "A copy ctor" << endl;
  }
  private:
  ~A() {
    cout << "A dtor" << endl;
    b.~B();
  }
  private:
  int i{1};
  B b{};
};

auto f() {
  return new A{5};
}

int main() {
  A* a1 = new A{};
  //A a2 = a1;
  delete a1;
  //A a3 = A{2};
  B b1{};
  // B b2{b1};
  //A a4{f()};
  return 0;
}