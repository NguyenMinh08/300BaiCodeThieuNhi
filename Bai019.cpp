#include <iostream>
using namespace std;
int main()
{
    int a,t = 0;
    cin >> a;
    for ( int i = 0;i < 5;i++)
    {
        t += a % 10;
        a /= 10;
    }
    t %= 10;
    cout << t << endl;
    ( t == 9 ) ? cout << "may man":
    cout << "chua may man";
    return 0;
}