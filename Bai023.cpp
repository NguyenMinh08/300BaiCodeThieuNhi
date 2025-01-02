#include <iostream>
using namespace std;
int sch3(int a)
{
    if ( a < 3 )
        cout << "-";
    else for ( int i = 1;i <= a;i++)
    {
        if ( i % 3 == 0 )
        cout << i <<" ";
    }
    return 0;
}
int main()
{
    int a;
    cin >> a;
    sch3(a);
    return 0;
}