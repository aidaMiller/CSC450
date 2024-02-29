#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

std::mutex mtx;

void countUp() {
  for (int i = 1; i <= 20; ++i) {
    lock_guard<std::mutex> lock(mtx);
    cout << "Count Up: " << i << endl;
  }
}

void countDown() {
  for (int i = 20; i >= 0; --i) {
    lock_guard<std::mutex> lock(mtx);
    cout << "Count Down: " << i << endl;
  }
}

int main() {
  thread t1(countUp);
  thread t2(countDown);

  t1.join();
  t2.join();

  return 0;
}
