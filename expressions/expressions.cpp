#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct number {int i;};

constexpr auto name() {
  if (true)
  return number{5};
  else
  {
    return number{4};
  }
  
}
int main() {
  int i = 1;
  int j = 2;
  cout << (i and j) << endl;
  j and_eq i;
  cout << j << endl;
  cout << name().i << endl;
  uint8_t tbc = 255;
  int8_t c = tbc;
  cout << int(c) << endl;
  int op1 = 0;
  cin >> op1;
  unsigned int op2 = numeric_limits<unsigned>::max();
  cout << "op2: " << op2 << endl;
  cout << "uop1: " << (unsigned)op1 << endl;
  cout << "op1+op2: " << op1+op2 << endl;
  cout << "uop1+op2: " << (unsigned)op1+op2 << endl;
  return 0;
}