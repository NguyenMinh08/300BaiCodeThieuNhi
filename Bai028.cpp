#include <iostream>
using namespace std;
int su(int a)
{
    int t = 0;
    for ( int i = 1;i <= a;i++)
        if ( a % i == 0 )
             t++;
    return t;
}
int main()
{
    int a,t;
    cin >> a;
    t = su(a);
    cout << t;
    return 0;
}