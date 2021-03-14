#include <math.h>
#include <iostream>
using namespace std;
double func(int i)
{
	return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
}
void print(int n, int k)
{
	int count = 1;
	for (int i=0; i<n; ++i)
	{
		
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
void main()
{
	int n, k = 0;
	cout << "vvedite n=";
	cin >> n;
	cout << "vvedite k=";
	cin >> k;
	print(n, k);
}