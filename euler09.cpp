//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a^2 + b^2 = c^2
//For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int main()
{
    double a, b, c;
    bool pass = false;
    for(a = 1; pass == false; a++)
    {
        for (b = 1; b < 1000; b++)
        {
            c = pow((a*a + b*b),0.5);
            if ((a + b + c) == 1000)
            {
                cout << fixed <<a *b *c;
                pass = true;
                break;
            }
        }
        if (pass)
            break;
    }
    cout << endl << "Done";
    cin.get();
    return 0;
}

