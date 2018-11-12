/* Напишите программу, выписывающую все элементы последовательности,
имеющие не менее пяти делителей */



#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *qwa = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> *(qwa + i);
	};
	cout << '\n';
	for (int i = 0; i < n; i++)
	{
		int d = 0;
		int q = *(qwa + i);
		for (int j = 1; j <= q; j++)
		{
			if ((q % j) == 0)
			{
				d++;
			};
		};
		if (d >= 5)
		{
			cout << q << " ";
		};
	};
}
