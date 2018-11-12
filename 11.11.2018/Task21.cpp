// Для структуры Date напишите метод, выписывающий наименование дня недели по дате. 

#include <iostream>
using namespace std;

int mdn (int a, int b) {
	int g = 0;
	for (int i = a; i > 1; i--)
	{
		if ((i % b) == 0)
		{
			g = i;
			break;
		}
	}
	return g;
}

struct Date
{
	int Day;
	int Month;
	int Year;

	Date ()
	{
		Day = 0;
		Month = 0;
		Year = 0;
	}

	void i()
	{
		cin >> Day >> Month >> Year;
	}

	void o()
	{
		if ((Day / 10) == 0) {cout << 0;};
		cout << Day << ".";
		if ((Month / 10) == 0) {cout << 0;};
		cout << Month << "." << Year;
	}

	bool viso()
	{
		if ((Year % 400) == 0) {return true;}
		else
			{
				if ((Year % 100) == 0) {return false;}
				else
				{
					if ((Year % 4) == 0) {return true;}
					else {return false;}
				}
			}
	}

	int day()
	{
		if (Month == 2)
		{
			if (viso()) {return 29;}
			else {return 28;}
		}
		else
		{
			if (((Month <= 7) && (((Month % 2) != 0))) || ((Month >= 8) && ((Month % 2) == 0)))
			{
				return 31;
			}
			else {return 30;}
		}
	}

	int mes ()
	{
		if ((Month == 1) || (Month == 10)) return 0;
		if (Month == 5) return 1;
		if (Month == 8) return 2;
		if ((Month == 2) || (Month == 3) || (Month == 11)) return 3;
		if (Month == 6) return 4;
		if ((Month == 9) || (Month == 12)) return 5;
		if ((Month == 4) || (Month == 7)) return 6;
	}

	int yea ()
	{
		int n = (Year / 100);
		n -= mdn(n, 4);
		n *= 5;
		n -= mdn(n, 7);
		return n;
	}


	int ned ()
	{
		int m = Day + mes();
		m -= mdn(m, 7);

		int p = (Year % 100);
		p -= mdn(p, 28);
		p += ((Year % 100)/4);
		p += yea();
		if (((Month == 1) || (Month == 2)) && (viso() == 1)) p--;

		m += p;
		m -= mdn(m, 7);

		return m;
	}
};

int main()
{
	Date An;
	An.i();

	if (An.ned() == 1) cout << "Sunday";
	if (An.ned() == 2) cout << "Monday";
	if (An.ned() == 3) cout << "Tuesday";
	if (An.ned() == 4) cout << "Wednesday";
	if (An.ned() == 5) cout << "Thursday";
	if (An.ned() == 6) cout << "Friday";
	if ((An.ned() == 0) || (An.ned() == 7)) cout << "Saturday";
	
}
