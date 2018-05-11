//The sum of the squares of the first ten natural numbers is,
//
//1^2 + 2^2 + ... + 10^2 = 385
//The square of the sum of the first ten natural numbers is,
//
//(1 + 2 + ... + 10)^2 = 552 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>

using namespace std;
int main()
{
    long long sqSum = 0;
    long long sumSq = 0;
    for (int i = 1; i <= 100; i++)
    {
        sqSum += i*i;
        sumSq += i;
    }
    sumSq *= sumSq;
    cout << sumSq - sqSum;
    cout << endl << "Done";
    cin.get();
    return 0;
}

