#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b;
    c = ( a + b * 2 ) / 3;
    cout << fixed << setprecision(1) << c << endl;
    ( c >= 8 ) ? cout << "Gioi" :
    ( c >= 6.5 ) ? cout << "Kha" :
    ( c >= 5 ) ? cout << "Trung binh" :
    ( c >= 3.5 ) ? cout << "Yeu" :
    cout << "Kem";
    return 0;
}