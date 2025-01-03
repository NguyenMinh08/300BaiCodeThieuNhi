#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0; i < mang.size();i++)
        cin >> mang[i];

}
bool check5(int num)
{
    if ( num % 5 == 0 )
        return true;
    else return false;
}
void tongsc5(vector<int>mang,int &tong)
{
    tong = 0;
    bool check = false;
    for ( int i = 0 ; i < mang.size();i++)
    {
        if (check5(mang[i]))
        {
            cout << mang[i] << " ";
            tong += mang[i];
            check = true;
        }
    }
    if ( check )
        cout << endl << tong;
    else cout << "-";
}
int main()
{
    int n,tong;
    cin >> n;
    vector<int>mang(n);
    nhapmang(mang);
    tongsc5(mang,tong);
    return 0;
}