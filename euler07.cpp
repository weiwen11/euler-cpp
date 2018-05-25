//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?
#include <iostream>

using namespace std;
int main()
{
    int count = 0;
    long max = 400000;
    bool isPrime[max];

    for (int i =0; i < max; i++)
        isPrime[i] = true;

    for (int i = 2; i < max; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2; j < max; j++)
            {
                if (j * i > max)
                    break;
                if (isPrime[i*j])
                    isPrime[i * j] = false;
            }
        }
    }
    for (int i = 2; i < max; i++)
    {
        if (isPrime[i])
        {
            count++;
        }
        if (count == 10001)
        {
            cout << i << endl;
            break;
        }
    }

    cout << endl << "Done";
    cin.get();
    return 0;
}

