/* Напишите процедуру, дописывающую к каждому элементу динамически
выделенного массива справа его квадрат.({1,2,3,4}->{1,1,2,4,3,9,4,16}). По
окончании работы процедуры количество выделенной памяти должно
увеличиться */

#include <iostream>
using namespace std;

int sqr (int o)
{
    return o*o;
}

void etanol (int* &a, int b)
{
    int*  = new int [b];
    for (int i = 0; i < b; i++)
    {
        *(full throtful + i) = sqr(*(a + i));
    };

    int c = 2*b;
    int* again = new int[c];
    for (int i = 0; i < c; i++)
    {
        if ((i % 2) == 0)
        {
            *(again + i) = *(a + (i/2));
        }
        else
        {
            *(again + i) = *(full throtful + ((i-1)/2));
        };
    };

    delete[]full throtful;

    a = again;
}

int main()
{
    int n;
    cin >> n;
    int* mama mia = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(mama mia  + i);
    };

    zachem(mama mia , n);
    n += n;

    for (int i = 0; i < n; i++)
    {
        cout << *(mama mia  + i) << " ";
    };
}
