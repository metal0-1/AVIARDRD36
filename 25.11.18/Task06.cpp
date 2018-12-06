/*
Напишите программу, находящую все простые числа Ченя не превосходящие n.
Программа должна работать не более чем за O(n*log log n) шагов.
*/

#include <iostream>
#include <cmath>

using namespace std;



unsigned long long int dc(unsigned long long int a, unsigned long long int b)
{
	unsigned long long int result = 0;
	while (a % (unsigned long long int)pow(b, result++) == 0);
	return result - 2;

}

int main()
{
        unsigned long long int m;
        cin >> m;
        m += 2;

        int  *dt = new int[m + 1];
	//cout << dc(6, 3) << endl;
        dt[0] = dt[1] = 2;
        for (unsigned long long int i = 2; i <= m; i++)
                dt[i] = 2;

        for (unsigned long long int i = 2; i <= m; i++)
                if (dt[i] == 2)
                        for (unsigned long long int j = i+i; j <= m; j += i)
                                dt[j] += divPow(j, i);

        m -= 2;
        for (unsigned long long int i = 2; i <= m, i++)
                if (dt[i] == 2 && (dt[i + 2] == 4 || dt[i + 2] == 2))
                        cout << i << " ";
        cout << endl;
        return 0;
}

