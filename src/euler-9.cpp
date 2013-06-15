#include <iostream>
#include <cassert>

constexpr int max_i = 100;
constexpr int max_j = (max_i + 1);

bool constraint_1(int a, int b, int c) {
  return a + b + c == 1000;
}

void print_result(int a, int b, int c) {
  std::cout << "Found the triple.  ";
  std::cout << "(" << a << ", " << b << ", " << c << ")  ";
  std::cout << "The product is: " << a*b*c << "\n";
}

int main()
{
  for(auto i=1; i < max_i; i++) {
    for(auto j=(i+1); j < max_j; j++) {
      auto a = j*j - i*i;
      auto b = 2*i*j;
      auto c = j*j + i*i;

      assert( a*a + b*b == c*c );

      if (constraint_1(a, b, c)) {
        print_result(a, b, c);
      }
    }
  }

  return 0;
}
