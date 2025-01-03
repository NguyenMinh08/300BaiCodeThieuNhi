#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
bool checksnt(int num)
{
    if ( num < 2 )
        return false;
    for ( int i = 2; i <= sqrt(num);i++)
        if ( num % i == 0 )
            return false;
    return true;
}
void tongsnt(int a,int b,int &tong,int &dem)
{
    tong = 0,dem = 0;
    for ( int i = a; i <= b; i++)
    {
        if (checksnt(i))
        {
            tong +=i;
            dem++;
        }
    }
}
double tbc(double tong,double dem)
{
    return static_cast<double>(tong) / dem;
}
int main()
{
    int a,b,tong,dem;
    cin >> a >> b;
    tongsnt(a,b,tong,dem);
    if ( dem == 0 )
    {
        cout << "-";
    }
    else 
    {
    double result = tbc(tong,dem);
    cout << fixed << setprecision(2) <<result;
    }
    return 0;
}
