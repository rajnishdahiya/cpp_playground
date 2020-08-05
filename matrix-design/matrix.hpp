#include "matrix.h"

namespace matrix {

template<dimtype_t N, typename T>
dimtype_t Matrix<N, T>::size() const {
  return data.size() * data[0].size();
}

template<dimtype_t N, typename T>
template<typename S>
Matrix<N, T>::Matrix(
  std::initializer_list<S> init) {
  //std::vector<Matrix<0,double>> v = init;
  //data = init;
  for (auto &&i : init) {
    data.push_back(SubMatrix(i));
  }
}

template<dimtype_t N, typename T>
std::ostream& operator<<(std::ostream& os, const Matrix<N,T>& m) {
  os << "order: " << m.order() << std::endl
     << "size: " << m.size() << std::endl;
     for (size_t i = 0; i < N; i++)
     {
       os << "extent(" << i << "): " << m.extent(i) << std::endl;
     }
     os << "{"
     // << m.data
     << "}";
  return os;
}

} // namespace matrix ends