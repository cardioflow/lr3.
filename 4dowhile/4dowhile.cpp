#include <iostream>
using namespace std;
int FindFirstElement(double eps)
{
    double count = 0;
    int i = 0;
    do
    {
        count = pow(-1, i) * ((i + 1) / (pow(i, 3) + 1));
        if (abs(count) <= eps)
        {
            break;
        }
        i++;
    } while (true);
    return i;
}
void main()
{
    double eps;
    cout << "eps= ";
    cin >> eps;
    cout << "Number= " << FindFirstElement(eps);
}