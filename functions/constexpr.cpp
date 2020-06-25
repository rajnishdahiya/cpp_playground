#include <iostream>
#include <string>

using namespace std;

constexpr int f1() {
  int j = 0;
  for (size_t i = 0; i < 2; i++)
  {
    j += i;
  }
  if (j) return j;
  return 10;
}

int main() {
  constexpr auto a = f1();
  int arr[a];
  cout << a << endl;
  return 0;
}