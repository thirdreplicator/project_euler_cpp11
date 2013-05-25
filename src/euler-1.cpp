#include <iostream>

int main()
{
  const int N = 1000;
  int sum = 0;

  for (int i=0; i < N; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  std::cout << sum << std::endl;
  return 0;
}
