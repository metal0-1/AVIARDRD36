/* Напишите программу, вычисляющую произведение цифр целого числа, чётность
которых совпадает с чётностью последней цифры. */

#include <iostream>
using namespace std;

bool ch(int m)
{
	return ((m % 2) == 0);
}

int main()
{
	long long B, s, d, i = 1;
	cin >> B;

	s = (B % 10);
	d = s;

	while (B >= 1)
	{
		if (ch(d) == ch(s))
		{
			i *= d;
		};
		B /= 10;
		d = (B % 10);
	};
	cout << i;
}
