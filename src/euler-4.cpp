#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string s) {
  return string(s.rbegin(), s.rend()) == s;
}

int main()
{
  int max = 0;
  string s = "";
  for (auto i = 100; i < 1000; i++) {
    for (auto j = 100; j < 1000; j++) {
      s = to_string(i*j);
      if (is_palindrome(s)) {
        if (max < i*j) {
          max = i*j;
        }
      }
    };
  };
  cout << "Largest 3-digit product palindrome: " << max << "\n";
}
