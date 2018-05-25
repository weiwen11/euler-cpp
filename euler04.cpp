//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>

using namespace std;
int main()
{
  long palim;
  long tmp;
  long rev = 0;
  long multiplier = 1;
  long largest = 0;
  for (long i = 100; i < 1000; i++) {
    for (long j = 100; j < 1000; j++) {
      palim = i * j;
      tmp = palim;
      rev = 0;
      multiplier = 1;
      while ((tmp - multiplier) > 0) {
        multiplier *= 10;
      }
      multiplier /= 10;

      while (tmp > 0) {
        rev += tmp % 10 * multiplier;
        tmp /= 10;
        multiplier /= 10;
      }
      if (palim == rev) {
        if (rev > largest)
          largest = rev;
      }
    }
    }
    cout << largest << endl;
}

