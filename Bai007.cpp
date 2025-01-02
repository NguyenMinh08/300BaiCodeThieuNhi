#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,s;
    cin >> a >> b;
    s = a * b / 2;
    cout << fixed << setprecision(2) << s;
}
