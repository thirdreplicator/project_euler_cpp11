#include <cassert>
#include <functional>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

void print_vector(vector<int> &v) {
  for( auto vi: v) {
    cout << vi << " ";
  }
  cout << endl;
}

vector<int> init_with_counting_numbers(int max) {
  vector<int> v;
  v.reserve(max);
  for(int i=1; i <= max; i++) {
    v.push_back(i);
  }
  return v;
}

int sum(vector<int> arr) {
  return accumulate(arr.begin(), arr.end(), 0, plus<int>());
}

vector<int> square_each(vector<int> arr) {
  vector<int> v;
  v.reserve(arr.size());
  for(auto a: arr) {
    v.push_back(a*a);
  }
  return v;
}

int sum_of_squares(const int M) {
  vector<int> v_counting = init_with_counting_numbers(M);
  vector<int> v_sqrs = square_each(v_counting);
  int sos = sum(v_sqrs);
  return sos;
}

int square_of_sum(const int M) {
  vector<int> v_counting = init_with_counting_numbers(M);
  int sum_counting = sum(v_counting);
  return sum_counting * sum_counting;
}

int the_difference(const int M) {
  return square_of_sum(M) - sum_of_squares(M);
}

int main() {
  assert(sum_of_squares(10) == 385);
  assert(square_of_sum(10) == 3025);

  int n = 100;
  cout << "Sum of counting numbers: " << sum_of_squares(n) << endl;
  cout << "Sum of squares: " << square_of_sum(n)  << endl;
  cout << "The difference: " << the_difference(n)  << endl;

}
