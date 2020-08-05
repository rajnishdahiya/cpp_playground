template<typename Iter, typename Value>
Value accumulate(Iter begin, Iter end) {
  Value v{};
  while (begin != end) {
    v = v + *begin;
    ++begin;
  }
  return v;
}