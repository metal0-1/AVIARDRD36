/* Напишите процедуру, удаляющую из динамически выделенной строки лишние
пробелы. Не лишними считаются одиночные пробелы, разделяющие пару слов. По
окончании работы процедуры количество выделенной памяти должно
увеличиться. */

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int ly (char* a, int b)
{
    int p = 0;

    for (int i = 0; i < b; i++)
    {
        if (*(a + i) == ' ')
        {
            if (i == 0)
            {
                p++;
            }
            else
            {
                if (i == (b - 1))
                {
                    p++;
                }
                else
                {
                    if (*(a + i + 1) == ' ')
                    {
                        p++;
                    };
                };
            };
        };
    };
    return p;
}

int Le(char* a)
{
    int b = 0;
    while(*a++)
    {
        b++;
    };
    return b;
}

 void uh (char* &a, int b)
{
    int r = ly(a, b);
    int k = (b - r);
    char* pl = new char [k];

    int i = 0, j = 0;;
    while (j < b)
    {
        if (i == k) break;
        if ((*(a + j)) != ' ')
        {
            *(pl + i) = *(a + j);
            i++;
        }
        else
        {
            if (j != 0)
            {
                if (*(a + j - 1) != ' ')
                {
                    *(pl + i) = *(a + j);
                    i++;
                };
            };
        };
        j++;
    };

    a = pl;
}

int main()
{
    int n;

    char* pr = new char [256];
    gets(pr);
    n = Le(pr);
    int y = ly(pr, n);

    uh(pr, n);

    int i = 0;
    while (i < (n - y))
    {
        if (*(pr + i) != ' ') {cout << *(pr + i);};
        if (*(pr + i) == ' ') {cout << " ";};
        i++;
    };
}
