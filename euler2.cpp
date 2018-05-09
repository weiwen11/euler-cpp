//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <iostream>

int main()
{
    int first = 1;
    int second = 2;
    int tmp;
    long total = 0;
    for (int i = 0; second < 4000000; i++)
    {
        if (second % 2 == 0)
            total += second;
        tmp = second;
        second += first;
        first = tmp;
    }
    std::cout << total << std::endl;
}
    
