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
	while (i < n)
	{
		++i;
		summ += func(n);
	}
	return summ;
}
void task1()
{
	int n;
	cout << "vvedite chislo = ";
	cin >> n;
	cout << "summa funccii = " << summ(n);
}


double summ2(double eps)
{
	double summ2 = 0;
	int i = 0;
	while (abs(func(i)) > eps)
	{
		++i;
		summ2 += func(i);
	}

	return summ2;
}
void task2()
{
	double eps;
	cout << "vvedite chislo = ";
	cin >> eps;
	cout << "summa funccii = " << summ2(eps);
}


void print(int n, int k)
{
	int i = 0;
	int count = 1;
	while (i < n)
	{
		++i;
		if (count != k)
		{
			count++;
			func(i);
			cout << "n=" << i << "func=" << func(i) << "\n";
		}
		else
		{
			count = 1;
			continue;
		}
	}
}
void task3()
{
	int n, k = 0;
	cout << "vvedite n=";
	cin >> n;
	cout << "vvedite k=";
	cin >> k;
	print(n, k);
}


int FindFirstElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * ((i + 1) / (pow(i, 3) + 1));
		i++;
		if (abs(count) <= eps)
		{
			break;
		}
	}
	return i + 1;
}
void task4()
{
	double eps;
	cout << "eps= ";
	cin >> eps;
	cout << "Number= " << FindFirstElement(eps);
}


int findFirstElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * ((i + 1) / (pow(i, 3) + 1));
		i++;
		if ((abs(count) <= eps) && (count < 0))
		{
			break;
		}
	}
	return i + 1;
}
void task5()
{
	double eps;
	cout << "eps= ";
	cin >> eps;
	cout << "Number= " << findFirstElement(eps);
}