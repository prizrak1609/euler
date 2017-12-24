#include <iostream>

int nod(const int first, const int second)
{
    int nod = first;
    int tmp = second;
    while (tmp != 0 && nod != 0)
    {
        if (tmp > nod)
        {
            tmp %= nod;
        }
        else
        {
            nod %= tmp;
        }
    }
    if (nod == 0)
    {
        nod = tmp;
    }
    return nod;
}

int nok(const int first, const int second)
{
    const int _nod = nod(first, second);
    if (_nod != 0)
    {
        return second * first / _nod;
    }
    return 0;
}

int main()
{
    int lastNumber = 1;
    long int number = 2;
    for (int i = 2; i<=20; i++)
    {
        number = nok(number, lastNumber);
        lastNumber = i;
    }
    std::cout << number << std::endl;
    return 0;
}
