#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c,p,s,r;
    cin >> a >> b >> c;
    p = ( a + b + c ) / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    r = (a * b * c) / (4 * s);
    
    cout << fixed << setprecision(3) << r;
}
