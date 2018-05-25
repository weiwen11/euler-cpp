//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.
#include <iostream>

using namespace std;
int main()
{
    int max = 2000000;
    bool isPrime[max];
    for (int i = 0; i < max; i++)
        isPrime[i] = true;
    for (int i = 2; i < max; i++)
    {
        if (i > max/2)
            break;
        if (isPrime[i])
        {
            for (int j = 2; j < max; j++)
            {
                if ((j * i ) > max)
                    break;
                isPrime[i * j] = false;
            }
        }
    }
    long total = 0;
    for (int i = 2; i < max; i++)
    {
        if (isPrime[i])
            total += i;
    }
    cout << total;
    cout << endl << "Done";
    cin.get();
    return 0;
}

