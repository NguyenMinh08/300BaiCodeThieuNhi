#include <iostream>
using namespace std;
int UCLN(int a,int b)
{
    if ( b == 0 )
        return a;
    return UCLN(b,a % b);
}
int main()
{
    int a,b,ucln;
    cin >> a >> b;
    ucln = UCLN(a,b);
    cout << a / ucln << "/" << b/ucln;
    return 0;
}
