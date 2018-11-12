/* Напишите программу, заменяющую составные числа на их самые большие
простые делители. */



#include <iostream>
using namespace std;

bool prost(int a)
{
	int k = 0;
	if (a == 1)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i <= (a / 2); i++)
		{
			if ((a % i) == 0)
			{
				return 0;
				break;
				k++;
			};
		};
		if (k == 0)
		{
			return 1;
		};
	};
}

int main()
{
	long long d;
	cin >> d;


    for (int i = n; i >= 2; i--)
    {
        if (((d % i) == 0) && (easy(i) == easy(2)))
        {
            d = i;
            break;
        };
    };
    cout << d;

}
