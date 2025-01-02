#include <iostream>
using namespace std;
int slsch3(int a)
{
    int t = 0;
    for ( int i = 1;i <= a;i++)
        if ( i % 3 == 0 )
             t++;
    return t;
}
int main()
{
    int a,t;
    cin >> a;
    t = slsch3(a);
    cout << t;
    return 0;
}