#include <iostream>
using namespace std;
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
void main()
{
    double eps;
    cout << "eps= ";
    cin >> eps;
    cout << "Number= " << FindFirstElement(eps);
}