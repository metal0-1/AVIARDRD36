/* Напишите процедуру, заполняющую квадратный двумерный массив последовательными числами змейкой против часовой стрелки, 
начиная с верхнего правого угла. */

#include <cstdio>
using namespace std;

void mf(int** &a, int b) {
	
	b--;
   int c = b, d = 0, k = 1;
	while (c >= d)
	{
		int x = c, y = d;

		while (x > d)
		{
			a[y][x] = k;
			k++;
			x--;
		}

		while (y < c)
		{
			a[y][x] = k;
			k++;
			y++;
		}

		while (x < c)
		{
			a[y][x] = k;
			k++;
			x++;
		}

		while (y > d)
		{
			a[y][x] = k;
			k++;
			y--;
		}

		d++;
		c--;
	}

	if ((b % 2) == 0) a[(b/2)][(b/2)] = ((b+1)*(b+1));
}

int main() {
	int n;
	scanf("%d", &n);
	int** o = new int* [n];
	for (int t = 0; t < n; t++)
	{
		*(o + t) = new int [n];
	}

	int w = 3;
	if ((n*n) >= 10) w += 2;

   printf("\n");
	mf(o, n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (j == 0) {
			printf("%1d", o[i][j]);
			}
			else {
			printf("%*d", w, o[i][j]);
			}
			}
		printf("\n");
	  }
}
