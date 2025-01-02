#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a;
    b = a / 5000;                
    a = a % 5000;                
    c = a / 2000;                
    a = a % 2000;                
    d = a / 1000;
    cout << b << " " <<  c  <<" " << d;
    return 0;
}