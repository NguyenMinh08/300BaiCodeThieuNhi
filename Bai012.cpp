#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    ( a % 100 < 10) ? cout << a / 10 << " 0" << a % 100 : cout << a / 10 << " " << a % 100;
    return 0;
}