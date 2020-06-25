#include <iostream>
#include <string>
#include <vector>

using namespace std;

int f(double) {return 0;};

struct S1 {static int i;};
struct S2 : S1 {int i; int j;};

int main() {
  using FP = int (*)(double);
  using AP = int (*)[];
  void* temp;
  int x;
  temp = &x;
  char a[4] = "pla";
  const char *b = "pal";
  int arr[2];
  int tda[2][2][2] = {
      {
        {1,2}, {3,4}
      },
      {
        {5,6}, {7,8}
      }
    };
  for (size_t i = 0; i < 8; i++)
  {
    cout << *(**tda+i) << endl;
  }
  int y = 4;
  using lr_i = int&;
  using rr_i = int&&;
  int& ir = y;
  double z = 1.1;
  rr_i irr = z;
  cout << is_pod<S2>::value << endl;
  f(y);
  return 0;
}