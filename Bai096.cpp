#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for (int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
bool checksc(int num)
{
    if ( num % 2 == 0 )
        return true;
    else return false;
}
void tongsc(vector<int>mang,double &tong,int &dem)
{
    tong = 0; dem = 0;
    for ( int i = 0; i < mang.size();i++)
        if(checksc(mang[i]))
        {
            tong += mang[i];
            dem++;
        }
}
double tbsc(double tong,int dem)
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
    tongsc(mang,tong,dem);
    double result = tbsc(tong,dem);
    cout << fixed << setprecision(2) << result;
    return 0;
}