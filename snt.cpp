//in so nguyen to be hon n
#include <iostream>
#include <math.h>
using namespace std;
int n, dem;
int main()
{
    cout << "Nhap so n: ";
    cin >> n;
    for (int i = n; i >= 2; i--)
    {
        dem = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                dem = dem + 1;
                break;
            }
        }
        if (dem == 0)
        {
            cout << "So nguyen to lon nhat nho hon " << n << " la " << i;
            break;
        }
    }
    return 0;
}