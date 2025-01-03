#include <iostream>
#include <vector>
#include <math.h>
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
    for ( int i = 2; i <= sqrt(num);i++)
        if ( num % i == 0 )
            return false;
    return true;
}
void demsnt(const vector<int>mang,int &dem)
{
    for ( int i = 0; i < mang.size();i++)
    {
        if (checksnt(mang[i]))
        dem++;
    }
}
int main()
{
    int dem = 0;
    vector<int>mang = nhapmang();
    demsnt(mang,dem);
    if ( dem == 0 )
        cout << "-";
    else cout << dem;
    return 0;
}