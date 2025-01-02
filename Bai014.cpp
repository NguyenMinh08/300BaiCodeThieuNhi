#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    ( a <= 11 ) ? cout << "Thieu nhi":
    ( a <= 25 ) ? cout << "Thieu nien":
    ( a <= 50 ) ? cout << "Trung nien":
    cout << "Lao nien";
    return 0;
}