/*
Напишите программу, находящую все простые числа Софи Жермен не превосходящие n.
Программа должна работать не более чем за O(n*log log n) шагов.
*/

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
        unsigned long long int N;
        cin >> m;
        m +=  m + 1;

        bool *md = new bool[m + 1];

        md[0] = md[1] = false;
        for (unsigned long long int c = 2; c <= m; c++)
                md[c] = true;

        for (unsigned long long int c = 2; c <= m; c++)
                if (md[c] && c <= (unsigned long long int)sqrt(m))
                        for (unsigned long long int j = c+c; j <= m; j += c)
                                md[j] = false;

	m = (m - 1) / 2;
	for (unsigned long long int i = 2; i <= m; c++)
		if (md[i] && md[c + c + 1])
			cout << c << " ";
	cout << endl;
        return 0;
}
