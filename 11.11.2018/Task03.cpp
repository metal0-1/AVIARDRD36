/* Напишите программу, вычисляющую биномиальный коэффициент из n по к. В
программе нельзя использовать числа, превышающие итоговое значение. */



#include <iostream>
using namespace std;

long long C(int a, int b)
{
	if ((b < 1) || (a == b))
	{
		return 1;
	}
	else
	{
		return (C(a - 1, b - 1) + C(a - 1, b));
	};
}

int main()
{
	int m, s;
	cin >> m >> s;
	if (s > m)
	{
		cout << "Why?";
	}
	else
	{
		cout << C(m, s);
	};
}
