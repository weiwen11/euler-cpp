//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    long long max = 600851475143;
    for (long long i = 2; i <= max; i++)
    {
       while (max % i == 0)
       {
          cout << i  <<" ";
          max/= i;
       }
    }
    cout << endl;
}
