/*
Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.
*/

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
        unsigned long int N, drag;
        cin >> N;

	drag = N;
	if (N <= 5)
		N += N + N + 1;
	else
		N += N;



	bool *Mark  = new bool[N + 1];

       Mark [0] = Mark[1] = false;
        for (unsigned long int i = 2; i <= N; i++)
        {
                Mark[i] = true;
        }

        for (unsigned long int i = 2; i*i <= N; i++)
        {
                if (Mark[i] && i <= (unsigned long int)sqrt(N))
                        for (unsigned long int j = i*i; j <= N; j += i)
                                Mark[j] = false;;
        }
	unsigned long int i = 2;
	while (drag > 0)
	{
		if(!Mark[i])
		{
			cout << i << " ";
			drag--;
		}
		i++;
	}
        cout << endl;

        return 0;
}


