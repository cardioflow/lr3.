#include <math.h>
#include <iostream>
using namespace std;
double func(int i)
{
	return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
}


double summ2(double eps)
{
	double summ2 = 0;
	int i = 0;
	do
	{
		++i;
		summ2 += func(i);
	} while (abs(func(i))>eps);
	return summ2;
}
void main()
{
	double eps;
	cout<< "vvedite chislo = ";
	cin >> eps;
	cout << "summa funccii = " << summ2(eps);
}