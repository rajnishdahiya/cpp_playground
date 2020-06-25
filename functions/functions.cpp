#include <iostream>
#include <string>

using namespace std;

namespace N1 {
  struct S {int i;};
  int f(S, int) { return 2;}
}
int f1(int (&a)[2]) {
  return a[1];
}
int f(N1::S, unsigned) {return 1;}

int main() {
  int arr[2]{4, 6};
  auto fp = f1;
  auto ip = reinterpret_cast<int*>(fp);
  cout << f1(arr) << ", " << *ip << endl;
  N1::S s;
  cout << f(s, 1U) << endl;
  return 0;
}