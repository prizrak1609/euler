#include <iostream>

int main()
{
    long int first = 1;
    long int second = 2;
    long int sum = 0;
    while (second <= 4000000)
    {
        if (second % 2 == 0)
        {
            sum += second;
        }
        long int tmp = first + second;
        first = second;
        second = tmp;
    }
    std::cout << sum << std::endl;
    return 0;
}
