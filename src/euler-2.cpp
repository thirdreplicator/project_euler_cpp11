#include<iostream>

int fib(int i, int j, int sum, int limit) {
  if (j >= limit) {
    return sum;
  } else if (j % 2 == 0) {
    return fib(j, i+j, sum+j, limit);
  } else {
    return fib(j, i+j, sum, limit);
  }
}

int main() {
  std::cout << fib(1, 2, 0, 4000000) << std::endl;
  return 0;
}
