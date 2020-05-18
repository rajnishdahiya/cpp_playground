#include <iostream>
#include <mutex>
#include <future>
#include <thread>


constexpr int step = 10;
int sharedInt = 0;
std::mutex m;

template <int COUNT>
void f() {
  std::unique_lock<std::mutex> lck(m);
  for (int i = 0; i < COUNT; i++) {
    // std::cout << COUNT << " " << i << std::endl;
    sharedInt += step;
  }
  return;
}

int g(const int count) {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    // std::cout << COUNT << " " << i << std::endl;
    sum += step;
  }
  return sum;
}

int main() {
  constexpr int loop1 = 50000;
  constexpr int loop2 = 50000;

  using TaskType = int(int);
  std::packaged_task<TaskType> p1{g};
  std::packaged_task<TaskType> p2{g};

  auto f1 = p1.get_future();
  auto f2 = p2.get_future();
  std::thread t1{std::move(p1), loop1};
  std::thread t2{std::move(p2), loop2};

  t1.join();
  t2.join();

  std::cout << "sharedInt:" << (f1.get() + f2.get())
    << "," << step*(loop1+loop2) << std::endl;
  return 0;
}