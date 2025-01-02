#include <iostream>
using namespace std;
int ttx(int a)
{
    int t;
    if ( a == 1 ) 
        t = 12000; 
    else if ( a <= 30 ) 
        t = 12000 + ( a - 1 ) * 10000; 
    else 
        t = 12000 + 29 * 10000 + ( a - 30 ) * 9000; 
    return t;
}
int main() {
    int a,t;
    cin >> a;
    t = ttx(a);
    cout << t;
    return 0;
}
