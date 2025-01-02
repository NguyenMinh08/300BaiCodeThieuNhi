#include <iostream>
#include <math.h>
using namespace std;
bool checksnt(int num)
{
    if ( num < 2)
        return false;
    for ( int i = 2 ; i <= sqrt(num);i++)
    {
        if ( num % i == 0 )
            return false;
    }
    return true;
}
int snt(int a,int b)
{
    int result = 0;
    for ( int i = a;i <= b;i++)
        if(checksnt(i))
            result++;
    return result;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int result = snt(a,b);
    cout << result;
    return 0;
}