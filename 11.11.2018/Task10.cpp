/* Напишите процедуру, удаляющую из динамически выделенного массива все
четные значения (функция принимает в качестве аргументов – указатель на
массив и его размер). По окончании работы процедуры количество выделенной
памяти должно уменьшиться. */


#include <iostream>
using namespace std;

int chet(int* a, int b)
{
    int m = 0;
    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) % 2) == 0)
        {
            m++;
        };
    };
    return m;
}

void zachto(int* &c, int d)
{
    int r = chet(c, d);

    int* jetfires = new int[d - r];
    int k = 0;
    for (int i = 0; i < d; i++)
    {
        if (((*(c + i)) % 2) != 0)
        {
            *(jetfires + k) = *(c + i);
            k++;
        };
    };

    c = jetfires;
}

int main()
{
    int n;
    cin >> n;
    int* capital = new int[n];
    for (int i = 0; i < n; i++)
    {
       cin >> *(capital + i);
    };

    int f = chet(capital, n);
    zachto(capital, n);
    cout << '\n';

    for (int i = 0; i < (n - f); i++)
    {
        cout << *(capital + i) << " ";
    };
    delete[] capital;
}
