#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
using namespace std;
vector<int>nhapmang()
{
    vector<int>mang;
    int x;
    while(cin >> x)
    {
        mang.push_back(x);
    }
    return mang;
}
bool checkscp(int num)
{
    if ( num < 0 )
        return false;
    int n = sqrt(num);
    return (n * n == num);
}
void tongscp(vector<int>&mang,double &tong,int &dem)
{
    tong = 0,dem = 0;
    for ( int i = 0; i < mang.size();i++)
    {
        if (checkscp(mang[i]))
        {
            tong += mang[i];
            dem++;
        }
    }
}
double tbscp(double tong,int dem)
{
    return tong / dem;
}
int main()
{
    double tong = 0;
    int dem = 0;
    vector<int>mang = nhapmang();
    tongscp(mang,tong,dem);
    if ( dem == 0 )
        cout << "-";
    else
    {
    double result = tbscp(tong,dem);
    cout << fixed << setprecision(1) << result;
    }
    return 0;
}
