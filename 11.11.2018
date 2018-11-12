//Напишите программу, вычисляющую сумму нечетных цифр целого числа.

#include <iostream>
using namespace std;

int main()
{
    long long m, d, a = 0;

    cin >> m;
    d = (m % 10);

    while (m >= 1)
    {
        if ((d % 2) == 1)
        {
            a += d;
        };
        m /= 10;
        d = (m % 10);
    };

    cout << a;
}
