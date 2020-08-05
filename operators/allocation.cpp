#include <iostream>
#include <new>

using namespace std;

class A {
  public:
  void* operator new(size_t s) {
    cout << "A new " << s << endl;
    return ::operator new(s);
  }
  void operator delete(void* p, size_t s) {
    cout << "A delete " << s << endl;
    ::operator delete(p, s);
  }
};

int main() {
  auto a = new A();
  delete a;
  return 0;
}