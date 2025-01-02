#include <iostream>
using namespace std;
int sch3(int a,int b)
{
    int result = 0;
    for (a;a <= b;a++)
      if ( a % 3 == 0) 
        result++;
    return result;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int result = sch3(a,b);
    cout << result;
    return 0;
} 
