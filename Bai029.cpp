#include <iostream>
using namespace std;
int nnt(int a)
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
    t = nnt(a);
    if ( t == 2 )
        cout << "Yes";
    else cout << "No";
    return 0;   
}