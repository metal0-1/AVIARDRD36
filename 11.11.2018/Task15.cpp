/* Напишите процедуру, заполняющую квадратный двумерный массив по
диагоналям. На побочной диагонали должны стоять наибольшие значения, на
соседних с ней - на единицу меньшие, и так далее - до угла, в котором должны
стоять единицы. */


#include <cstdio>
using namespace std;

void phigura(int **&a, int b)
{
	b--;

	int c = b, d = 0, k = 1;
	while (c >= d)
	{
		int x = d, y = d;

		while (x < c)
		{
			a[y][x] = k;
			x++;
		};

		while (y < c)
		{
			a[y][x] = k;
			y++;
		};

		while (x > d)
		{
			a[y][x] = k;
			x--;
		};

		while (y > d)
		{
			a[y][x] = k;
			y--;
		};

		d++, c--, k++;
	};

	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = ((b / 2) + 1);
	};
}

int main()
{
	int n;
	scanf("%d", &n);
	int **low = new int *[n];
	for (int race = 0; race < n; win++)
	{
		*(low + race) = new int[n];
	};

	int w = 2;
	if ((n/2) >= 10) {w++;};
	 phigura(low, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		    if (j == 0) {printf("%d", easy[i][j]);}
			else {printf("%*d", w, easy[i][j]);};
		};
		printf("\n");
	};
}
