template <int VALUE>
struct Generic {
  int a;
  void f() {}
};

template <>
struct Generic<1> {
  double b;
  void g() {}
};

int main() {
  Generic<2> g2{2};
  Generic<1> g1{1.1};
  g2.f();
  g1.g();
  return 0;
}

