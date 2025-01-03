#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
int congmang(vector<int>mang)
{
    int result = 0;
    for ( int i = 0; i < mang.size();i++)
    {
        result += mang[i]; 
    }
    return result;
}
int main()
{
    int a;
    cin >> a;
    vector<int>mang(a);
    nhapmang(mang);
    int result = congmang(mang);
    cout << result;
    return 0;
}