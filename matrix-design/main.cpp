#include <iostream>
#include "matrix.h"

using namespace std;
using namespace matrix;

template<typename T>
using M0 = Matrix<0,T>;
template<typename T>
using M1 = Matrix<1,T>;

int main() {
  M0<double> m0{2.0};
  cout << "m0: " << m0 << endl;
  /*initializer_list<double> init = {1.1, 2.2};
  std::vector<M0<double>> v = init;*/
  M1<double> m1{1, 2};
  cout << "m1: " << m1 << endl;
  initializer_list<initializer_list<double>> l21 = {
    {2,3,4},
    {4,5,4}
  };
  /*auto l22 = {
    {2,3,4},
    {4,5,4}
  };
  Matrix<2,double> m22(l22);
  cout << "m22: " << m22 << endl;*/
  Matrix<2,double> m21(l21);
  cout << "m21: " << m21 << endl;
  cout << "m21[1][2]: " << m21[1][2] << endl;
  cout << "m21(0,1): " << m21(0,1) << endl;
  return 0;
}
