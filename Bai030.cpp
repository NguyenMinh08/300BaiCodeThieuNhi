#include <iostream>
using namespace std;
int tab(int a,int b)
{
    int t = 0;
    for (a;a <= b;a++)
        t += a;
    return t;
}
int main()
{
    int a,b,t;
    cin >> a >> b;
    t = tab(a,b);
    cout << t;
    return 0;   
}