#include <iostream>
#include <list>

int main()
{
    std::list<int> digits;
    int maxPalindrome = 0;
    for (int i = 900; i <= 999; i++)
    {
        for (int j = 900; j <= 999; j++)
        {
            digits.clear();
            const int number = i * j;
            int tmpNumber = number;
            while (tmpNumber > 0)
            {
                digits.push_back(tmpNumber % 10);
                tmpNumber /= 10;
            }
            bool isPalindrome = true;
            while (digits.size() > 1)
            {
                const int first = digits.front();
                digits.pop_front();
                const int last = digits.back();
                digits.pop_back();
                isPalindrome = isPalindrome && (first == last);
                if (!isPalindrome)
                {
                    break;
                }
            }
            if (isPalindrome && maxPalindrome < number)
            {
                maxPalindrome = number;
            }
        }
    }
    std::cout << maxPalindrome << std::endl;
    return 0;
}
