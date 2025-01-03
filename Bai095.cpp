#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0; i < mang.size();i++)
    {
        cin >> mang[i];
    }
}
void tongspt(vector<int>&mang,double &tong,int &dem)
{
    tong = 0;dem = 0;
    for ( int i = 0; i < mang.size();i++)
    {
        tong += mang[i];
        dem++;
    }
}
double tspt(double tong,int dem)
{
    if ( dem == 0 )
        return 0;
    return tong / dem;
}
int main()
{
    double tong;
    int n,dem;
    cin >> n;
    vector<int>mang(n);
    nhapmang(mang);
    tongspt(mang,tong,dem);
    double result = tspt(tong,dem);
    cout << fixed << setprecision(1) << result;
    return 0;
}