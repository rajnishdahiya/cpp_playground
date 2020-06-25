#include <iostream>
#include <string>
#include <vector>

using namespace std;

void char_play(char c, signed char sc, unsigned char uc) {
  char c1 = sc;
  char c2 {uc};
  signed char sc1 = c;
  unsigned char uc1 = c;
  signed char sc2 = uc;
  unsigned char uc2 = sc;
  auto print = [](string varName, auto value) {
    cout << varName << ":" << int(value) << ", ";
  };
  print("c1", c1);
  print("c2", c2);
  print("uc1", uc1);
  print("uc2", uc2);
  print("sc1", sc1);
  print("sc2", sc2);
  cout << endl;
}
int main() {
  char_play(127, 127, 127);
  char_play(-128, -128, 255);
  return 0;
}