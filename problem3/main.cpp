#include <iostream>

int main()
{
    long long int number = 600851475143;
    int divNum = 1;
    while (number != 1)
    {
        divNum = 1;
        do {
            ++divNum;
        } while (number % divNum != 0);
        number /= divNum;
    }
    std::cout << divNum << std::endl;
    return 0;
}
