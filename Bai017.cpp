#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    ( a == 2 || a == 3 || a == 4) ? cout << "Mua Xuan":
    ( a == 5 || a == 6 || a == 7) ? cout << "Mua Ha":
    ( a == 8 || a == 9 || a == 10) ? cout << "Mua Thu":
    ( a == 11 || a == 12 || a == 1) ? cout << "Mua Dong":
    cout << " ";
    return 0;
}