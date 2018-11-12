/* Напишите процедуру, удаляющую из динамически выделенного массива
максимальный и минимальный элементы (если таковых несколько – удалить
нужно все). По окончании работы процедуры количество выделенной памяти
должно уменьшиться */

#include <iostream>
using namespace std;

int Max_a (int* a, int b)
{
    int k = *a;
    for (int i = 0; i < b; i++)
    {
        if ((*(a + i)) > k)
        {
            k = *(a+i);
        };
    };
    return k;
}

int min_a (int* a, int b)
{
    int k = *a;
    for (int i = 0; i < b; i++)
    {
        if ((*(a + i)) < k)
        {
            k = *(a+i);
        };
    };
    return k;
}

int tachka (int* a, int b)
{
    int m = 0;
    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) == (Max_a(a,b))) || ((*(a+i)) == (min_a(a,b))))
        {
            m++;
        };
    };
    return m;
}

void ihha(int* &a, int b)
{
    int r = tachka(a, b);
    int* airbus = new int [b - r];
    int k = 0;

    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) != Max_a(a,b)) && ((*(a + i)) != min_a(a,b)))
        {
            *(airbus + k) = *(a + i);
            k++;
        };
    };

    a = airbus;
}

int main()
{
    int n;
    cin >> n;
    int* ferarri = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(ferarri + i);
    };

    int f = tachka(feya, n);
    ihha(ferarri, n);
    cout << '\n';

    for (int i = 0; i < (n - f); i++)
    {
        cout << *(ferarri+i) << " ";
    };

    delete[]ferarri;
}
