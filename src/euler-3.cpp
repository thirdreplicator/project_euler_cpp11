#include<iostream>

long biggest_factor(long n, long divisor, long biggest_divisor)
{
  if (divisor > n) {
    return biggest_divisor;
  } else if (n % divisor == 0) {
    return biggest_factor( n / divisor, divisor + 1, divisor);
  } else {
    return biggest_factor(n, divisor + 1, biggest_divisor);
  }
}

int main()
{
  std::cout << biggest_factor(600851475143, 1, 1) << std::endl;
  return 0;
}
