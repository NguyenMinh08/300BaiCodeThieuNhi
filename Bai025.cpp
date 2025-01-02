#include <iostream>
using namespace std;
int sc(int a)
{
    int t = 0;
    for ( int i = 1;i <= a;i++)
        if ( i % 2 == 0 )
             t+=i;
    return t;
}
int main()
{
    int a,t;
    cin >> a;
    t = sc(a);
    cout << t;
    return 0;
}