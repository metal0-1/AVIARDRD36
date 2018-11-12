//Напишите программу, находящую сумму простых элементов массива.



#include <iostream>
using namespace std;

bool prost(int a)
{
	int k = 0;
	if (a == 1)
	{
		return (0==1);
	}
	else
	{
		for (int i = 2; i <= (a / 2); i++)
		{
			if ((a % i) == 0)
			{
				return (0 == 1);
				break;
				k++;
			};
		};
		if (k == 0)
		{
			return (1 == 1);
		};
	};
}

int main()
{
	int m, s = 0;
	cin >> m;
	int *speed = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> *(speed + i);
		if (prost(*(speed + i)) == prost(3))
		{
			s += *(speed + i);
		};
	};
	cout << '\m';
	cout << s;
}
