#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, cv, p, S;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cv = a + b + c;  
        p = cv / 2;      
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Day la 3 canh cua mot tam giac\n";
        cout << fixed << setprecision(2) << cv << " ";  
        cout << fixed << setprecision(1) << S << endl; 
    } else cout << "Day khong phai la 3 canh cua mot tam giac\n";
    return 0;
}