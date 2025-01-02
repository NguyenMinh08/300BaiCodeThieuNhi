#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,tbm;
    cin >> a >> b >> c;
    tbm = (a * 2 + b * 2 + c) / 5;
    cout << fixed << setprecision(1) << tbm;
    return 0;
}