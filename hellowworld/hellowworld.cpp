#include <iostream>
#include <string>
#include <vector>

#include "sums.h"

using namespace std;

template<int INT>
class A {
  public:
  A() {
    cout << INT << "A ctor" << endl;
  }
  ~A() {
    cout << INT << "A dtor" << endl;
  }
  //const A& operator=(const A&) const {return *this;}
};

class B : public A<2> {
  A<1>* a;
  public:
  B(): a(new A<1>[2]) {
    cout << "B ctor" << endl;
  }
  B(const B& b): a(new A<1>[2]) {
    // a[0] = b.a[0];
    copy(b.a, b.a+2, a);
    cout << "B c-ctor" << endl;
  }
  B& operator=(const B& b) {
    // copy(a, a+2, b.a);
    cout << "B a-ptor" << endl;
    return *this;
  }
  const B& operator=(const B&) const {
    return *this;
  }
  ~B() {
    delete[] a;
    cout << "B dtor" << endl;
  }
};

void TestScopeDtor() {
  cout << "For loop begins" << endl;
  {
    B b{};
    auto c = b;
    b = c;
  }
  cout << "For loop ends" << endl;
  return;
}

int main() {
  /*vector<int> v{1, 2, 3};
  string name;
  cin >> name;
  cout << "Hello World!" << v[1] << name;
  cout.flush();
  cin >> name;*/
  const B b1{};
  const B b2{};
  b1 = b2;
  TestScopeDtor();
  return 0;
}