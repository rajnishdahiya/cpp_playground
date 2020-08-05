#ifndef _MATRIX_H_
#define _MATRIX_H_

#include<vector>

namespace matrix {

using dimtype_t = size_t;

template<dimtype_t N, typename T>
class Matrix {
  using SubMatrix = Matrix<N-1,T>;

  public:
  template<typename... Extents>
  Matrix(Extents... extents);
  template<typename S>
  Matrix(std::initializer_list<S> init);
  // Matrix()
  dimtype_t order() const {return N;}
  dimtype_t size() const;
  dimtype_t extent(dimtype_t dim) const {
    if(dim) return data[0].extent(dim-1);
    return data.size();
  }
  const SubMatrix& operator[](dimtype_t index) const {
    return data[index];
  }
  template<typename INDEX>
  const SubMatrix& operator()(INDEX index) const {
    return data[index];
  }
  template<typename INDEX, typename... INDICES>
  const SubMatrix& operator()(INDEX index, INDICES... indices) const {
    return data[index](indices...);
  }
  const SubMatrix& operator()(dimtype_t index) const {
    return data[index];
  }

  private:
  std::vector<SubMatrix> data;
};

template<typename T>
class Matrix<0, T> {
  public:
  Matrix(const T& t): data{t} {}
  dimtype_t order() const {return 0;}
  dimtype_t size() const {return 1;}
  dimtype_t extent(dimtype_t dim) const { return 0;}

  private:
  T data;
};
} // namespace matrix
#include "matrix.hpp"
#endif