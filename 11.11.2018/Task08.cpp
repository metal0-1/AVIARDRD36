/* Напишите две функции, находящие приближенное значение квадратного и
кубического корня. В программе не должны использоваться математические
библиотеки. */


#include <iostream>
using namespace std;

double sqrt(double a)
{
	double k;
	double c = 0.000001;
	for (double i = 0; 0 == 0; i += c)
	{
		if (((i * i) <= a) && (((i + c) * (i + c)) >= a))
		{
			k = i;
			break;
		};
	};
	k *= (1 / c);
	long long s = (long long)k + 1;
	int e = (s % 10);
	if (e >= 5)
	{
		s -= e;
		s += 10;
	}
	else
	{
		s -= e;
	};
	k = (s / 10);
	k *= (c * 10);
	return k;
}

double cbt(double a)
{
	double k;
	double c = 0.000001;
	for (double i = 0; 0 == 0; i += c)
	{
		if ((i * i * i <= a) && ((i + c) * (i + c) * (i + c) >= a))
		{
			k = i;
			break;
		};
	};
	k *= (1 / c);
	long long s = (long long)k + 1;
	int e = (s % 10);
	if (e >= 5)
	{
		s -= e;
		s += 10;
	}
	else
	{
		s -= e;
	};
	k = (s / 10);
	k *= (c * 10);
	return k;
}

int main()
{
	long long d;
	cin >> d;
	cout << sqrt(d) << '\n';
	cout << cbt(d) << '\n';
}
