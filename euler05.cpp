//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>

using namespace std;
int main()
{
    bool pass = false;
    long i;
    for (i = 40; pass == false; i+= 20)
    {
        for (int j = 11; j <= 20; j++)
        {
            if (i % j != 0)
                break;
            if (j == 20)
                pass = true;
        }
        if (pass == true)
            break;
    }
    cout << i;
    cout << endl << "Done";
    cin.get();
    return 0;
}

