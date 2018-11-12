/* Напишите программу, выписывающую все элементы последовательности,
имеющие ровно семь делителей */

#include <iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	int *qwa = new int[n];

	for (int i = 0; i < n; i++)
	{
		int d = 0;
		cin >> *(qwa + i);

		int q = *(qwa + i);
		for (int j = 1; j <= *(qwa + i);  j++)
		{
			if ((q % j) == 0)
			{
				d++;
			};
		};
		if (d == 7)
		{
			cout << *(qwa + i) << " ";
		};
	};
}
