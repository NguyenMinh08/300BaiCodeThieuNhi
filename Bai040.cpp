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
    int a,dem = 0;
    cin >> a;
    for ( int i = 0;dem < a;i++)
    if (scp(i))
    {
        cout <<i <<" ";
        dem++;
    }
    return 0;
}
