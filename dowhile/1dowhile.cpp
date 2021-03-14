#include <math.h>
#include <iostream>
using namespace std;
double func(int i)
{
	return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
}
double summ(int n)
{
	double summ = 0;
	int i = 0;
	do
	{
		++i;
		summ += func(n);

	} while (i < n);

	return summ;
}
void main()
{
	int n;
	cout << "vvedite chislo = ";
	cin >> n;
		cout << "summa funccii = " << summ(n);
}