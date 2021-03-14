#include <iostream>
#include <math.h>
using namespace std;
int findFirstNegativeElement(double eps)
{
	int i;
	double count = 0;
	for (i = 0; ; i++)
	{
		count = pow(-1, i) * ((i + 1) / (pow(i, 3) + 1));
		if ((abs(count) <= eps) && (count < 0))
		{
			return i + 1;
		}
	}
}
void main()
{
	double eps;
	cout << "eps = ";
	cin >> eps;
	cout << "Number = " << findFirstNegativeElement(eps);
}
