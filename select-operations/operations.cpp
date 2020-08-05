#include <iostream>
#include <limits>
#include <string>

using namespace std;

class Simple {
  public:
  Simple(): i(10) {
  }
  int i;
};

class Square {
  public:
  Square(int& i, int j): count_ref(i), count(j) {}
  auto operator()(int x) {
    count_ref++;
    count++;
    return x*x;
  }
  int& count_ref;
  int count;
};

int main() {
  int x{}, y{}, z{};
  auto square = [&x, z](int i) mutable {
    x++;
    z++;
    return i*i;
  };
  square(5);
  Square sqr{y, z};
  sqr(5);
  cout << x << ", " << y << ", " << sqr.count << endl;
  Simple sarr[4] = {};
  Simple s{};
  cout << s.i << ", " << sarr[2].i << endl;
  auto p = reinterpret_cast<int*>(&s);
  *p = 4;
  return 0;
}