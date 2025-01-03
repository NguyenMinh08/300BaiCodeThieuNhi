#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
vector<int> nhapmang()
{
    vector<int>mang;
    int x;
    while ( cin >> x )
        mang.push_back(x);
    return mang;
}
bool checksnt(int num)
{
    if ( num < 2 )
        return false;
    for (int i = 2; i <= sqrt(num);i++)
        if ( num % i == 0 )
            return false;
    return true;
}
void tongsnt(const vector<int>&mang,double &tong,int &dem)
{
    tong = 0,dem = 0;
    for ( int i = 0; i < mang.size(); i++)
    {
        if (checksnt(mang[i]))
        {
            tong += mang[i];
            dem++;
        }
    }
}
double tbsnt(double tong,int dem)
{
    return tong / dem;
}
int main()
{
    double tong = 0;
    int dem = 0;
    vector<int>mang = nhapmang();
    tongsnt(mang,tong,dem);
    if ( dem == 0 )
        cout << "-";
    else 
    {
    double result = tbsnt(tong,dem);
    cout << fixed << setprecision(2) << result;
    }
    return 0;
}
