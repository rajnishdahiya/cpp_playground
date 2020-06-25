#include <iostream>

using namespace std;

enum Test;
enum class Flags : int {
  Old = 1,
  Shiny = 2,
  Slow = 4,
};

constexpr Flags operator bitor (Flags a, Flags b) {
  return (Flags)(int(a) bitor int(b));
}
constexpr Flags operator bitand (Flags a, Flags b) {
  return (Flags)(int(a) bitand int(b));
}


int main() {
  Flags oldShiny = (Flags)(Flags::Old bitor Flags::Shiny);
  cout << (int)(oldShiny bitand Flags::Old) << ", " << (int)(oldShiny bitand Flags::Shiny) << endl;
  return 0;
}