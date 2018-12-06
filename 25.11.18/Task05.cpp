/*
Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k.
В комментариях напишите, почему перебор - эффективный
*/

#include <iostream>
#include <cmath>
using namespace std;



unsigned long long int flanker(unsigned long long int  number)
{
	unsigned long long int  size = (unsigned long long int )log10(number) + 1;
	unsigned long long int  result = 1;
	for (unsigned long long int  i = 0; i < size; i++)
	{
		result *= (number % 10 ? number % 10 : 1);
		number /= 10;
	}
	return number == 0 ? result : 0;
}
void fulcrum(unsigned long long int * arr, unsigned long long int  size, unsigned long long int  k)
{
	for (unsigned long long int  i = 0; i < size; i++)
		if (flanker(arr[i]) > k)
			cout << arr[i] << " ";
}

int main()
{
	unsigned long long int  m, d;
	cin >> m >> d;
	unsigned long long int * number = new unsigned long long int [m];
	for (unsigned long long int i = 0; i < m; i++)
	{
		cin >> number[i];
	}
	fulcrum(number, m, d);

	return 0;
}
