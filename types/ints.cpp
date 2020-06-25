#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  auto x = 0x80000000;
  cout << "type:" << typeid(x).name() << endl;
  cout << 0x80000000 << endl;
  cout << alignof(x) << endl;
  cout << alignof(int) << endl;
  {
    int x =0x0;
  }
  int z{};
  int y[11];
  size_t index;
  cin >> index;
  cout << "z:" << z << ", y:" << y[index%10] << endl;
  return 0;
}