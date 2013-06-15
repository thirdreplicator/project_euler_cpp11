#include <iostream>
#include <string>

using namespace std;

const int MAX_DIVISOR = 20;

bool cleanly_divisible(int n, int max_divisor) {
  bool clean = true;
  for (int j = 1; j <= max_divisor; j++) {
    if ((n % j) != 0) {
      clean = false;
      break;
    }
  }
  return clean;
}

void print_answer(int n) {
  cout << "Smallest clean dividand: " << n << "\n";
}

int main()
{

  int n = 1;
  while( ! cleanly_divisible(n, MAX_DIVISOR) ) {
    n++;
  }
  print_answer(n);

}
