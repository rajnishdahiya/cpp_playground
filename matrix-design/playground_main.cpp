#include<iostream>
#include<vector>

using namespace std;

class A {
  public:
  A(double _a): a{_a} {}
  double get() { return a;}

  private:
  double a;

};

int main() {
  A a{1.1};
  cout << a.get() << endl;
  vector<A> v;
  v = {1, 2};
  //cout << v << endl;
  return 0;
}