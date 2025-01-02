#include <iostream>
using namespace std;
int ttd(int a)
{
    int t;
    if ( a < 50 )
        t = a * 600;
    else if ( a < 100 )
        t = ( 50 * 600 ) + ( a - 50 ) * 800;
    else if ( a < 200 )
        t = ( 50 * 600 ) +  ( 50 * 800 ) + ( a - 100 ) * 1100;
    else t = ( 50 * 600 ) +  ( 50 * 800 ) + ( 100  * 1100 ) + ( a - 200 ) * 1500;
    return t;
}
int main() {
    int a,t;
    cin >> a;
    t = ttd(a);
    cout << t;
    return 0;
}
