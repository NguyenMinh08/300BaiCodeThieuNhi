#include <iostream>
#include <math.h>
using namespace std;
bool scp(int a)
{
    if ( a < 0 )
        return false;
    int cb2a = sqrt(a);
    return (cb2a * cb2a == a );
}
int main()
{
    int a;
    cin >> a;
    if (scp(a))
        cout <<"Yes";
    else cout <<"No";
    return 0;
}