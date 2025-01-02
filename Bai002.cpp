#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,cv,dt;
    cin >> a;
    cv = a * 2 * 3.14;
    dt = a * a * 3.14;
    cout << fixed << setprecision(2) << cv << " " << dt;
    return 0;
}
