#include <iostream>

int main() {
  int sum = 0;
  int a = 1;
  int b = 2;
  int n;

  while (b < 4000000) {
    if (b % 2 == 0) {
      sum += b;
    }
    n = a + b;
    a = b;
    b = n;
  }

  std::cout << sum;
}