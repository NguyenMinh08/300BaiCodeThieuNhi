#include <iostream>
using namespace std;
int sch35(int a,int b)
{
    int resultsch35 = 0;
    for (int i = a;i <= b;i++)
        if ( i % 3 == 0 || i % 5 == 0) 
            resultsch35++;
    return resultsch35;
}
int tsc(int a,int b)
{
    int resulttsc = 0;
    for (int i = a;i <= b;i++)
        if ( i % 2 == 0 )
            resulttsc += i;
    return resulttsc;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int resultsch35 = sch35(a,b);
    int resulttsc = tsc(a,b);
    cout << resultsch35 << " " <<  resulttsc;
    return 0;
} 
 
