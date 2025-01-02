#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,tb;
    cin >> a >> b >> c;
    tb = ( a + b + c ) / 3;
    cout << fixed << setprecision(1) << tb;
    return 0;
}



