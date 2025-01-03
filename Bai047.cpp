#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
void insdm(const vector<int>&mang)
{
    bool duong = false;
    for ( int i = 0; i < mang.size();i++)
        if ( mang[i] > 0 )
        {
                cout << mang[i] << " ";
                duong = true;
        }
    if (!duong)
        cout << "-";
    cout << endl;
}
void insam(const vector<int>&mang)
{
    bool am = false;
    for ( int i = 0; i < mang.size();i++)
        if ( mang[i] < 0 )
        {
                cout << mang[i] << " ";
                am = true;
        }
    if (!am)
        cout << "-";
    cout << endl;
}
void hacbachvothuong(const vector<int>&mang,int &hac,int &bach)
{
    hac = 0,bach = 0;
    for ( int i = 0; i < mang.size();i++)
        if ( mang[i] > 0 )
            bach++;
        else if ( mang[i] < 0 ) 
            hac++;
}
int main()
{
    int n,hac,bach;
    cin >> n;
    vector<int>mang(n);
    nhapmang(mang);
    hacbachvothuong(mang,hac,bach);
    cout << bach << " " << hac << endl;
    insdm(mang);
    insam(mang);
    return 0;
}
