#include <iostream>
using namespace std;
int sch35(int a)
{
    int t = 0;
    for ( int i = 1;i <= a;i++)
        if ( i % 3 == 0 && i % 5 == 0 )
             t+=i;
    return t;
}
int main()
{
    int a,t;
    cin >> a;
    t = sch35(a);
    cout << t;
    return 0;
}