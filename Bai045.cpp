#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for (int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
int tongmang(const vector<int>&mang)
{
    int result = 0;
    for ( int i = 0; i < mang.size();i++)
    {
        if ( mang[i] % 2 == 0)
            result += mang[i];
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int>mang(n);
    nhapmang(mang);
    int result = tongmang(mang);
    if (result) cout << result;
    else cout << "-";
    return 0;
}