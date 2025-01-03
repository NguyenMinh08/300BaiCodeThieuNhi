#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
void nhapmang(vector<int>&mang)
{
    vector<int>mang;
    for (int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
int main()
{
    int n;
    cin >> n;
    vector<int>mang(n);
    nhapmang(mang);
    return 0;
}