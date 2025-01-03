#include <iostream>
#include <math.h>
using namespace std;
bool checksnt(int num)
{
    if ( num < 2)
        return false;
    for ( int i = 2 ; i <= sqrt(num);i++)
        if ( num % i == 0 )
            return false;
    return true;
}
void insnt(int a,int b)
{
    bool snt = false;
    for ( int i = a; i <= b;i++)
    {
        if (checksnt(i))
        {
            cout << i << " ";
            snt = true;
        }
    }
    if (!snt)
        cout << "-";
}
int main()
{
    int a,b;
    cin >> a >> b;
    insnt(a,b);
    return 0;
} 
