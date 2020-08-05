#include <iostream>

using namespace std;

struct V {
  int i;
};

struct A {
  int i;
};

struct B: A, virtual V {
  B(): A{1}, V{2} {}
  int i;
};

struct C: B, virtual V, A {
  C(): B{}, V{3}, A{4} {}
  int i{5};
};

int main() {
  C c{};
  auto v = static_cast<V*>(&c);
  cout << v->i << endl;
  auto p1 = static_cast<B*>(&c);
  cout << (static_cast<A*>(p1))->i << endl;
  auto p2 = dynamic_cast<C*>(v);
  return 0;
}