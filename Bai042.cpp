#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
int demsd(vector<int>mang)
{
    int result = 0;
    for ( int i = 0; i < mang.size();i++)
    {
        if (mang[i] > 0 )
            result++;
    }
    return result;
}
int main()
{
    int a;
    cin >> a;
    vector<int>mang(a);
    nhapmang(mang);
    int result = demsd(mang);
    cout << result;
    return 0;
}
