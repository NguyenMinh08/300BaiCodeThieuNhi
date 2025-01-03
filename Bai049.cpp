#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0 ; i < mang.size();i++)
        cin >> mang[i];
}
void checksln(vector<int>&mang,int &sln,int &vitri)
{
    sln = mang[0];
    vitri = 0;
    for ( int i = 0; i < mang.size();i++)
    {
        if ( mang[i] > sln )
        {
            sln = mang[i];
            vitri = i;
        }
    }
    cout << sln << " " << vitri;
}
int main()
{
    int n,sln,vitri;
    cin >> n;
    vector<int>mang(n);
    nhapmang(mang);
    checksln(mang,sln,vitri);
    return 0;
}