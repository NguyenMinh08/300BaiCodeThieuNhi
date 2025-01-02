#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,cv,dt,p;
    cin >> a >> b >> c;
    cv = a + b + c;
    p = cv / 2;
    dt = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(1) << cv << " " << setprecision(3) << dt;
    return 0;
}




