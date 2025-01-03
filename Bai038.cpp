 #include <iostream>
 using namespace std;
 bool checksnt(int num)
 {
    if ( num < 2 )
        return false;
    for ( int i = 2; i < num;i++)
        if ( num % i == 0 )
            return false;
    return true;
 }
void insnta(int a)
 {
    int dem = 0;
    for ( int i = 2;dem < a; i++)
    {
        if ( checksnt(i) )
        {
            cout << i << " ";
            dem++;
        }
    }
 }
 int main()
 {
    int a;
    cin >> a;
    insnta(a);
    return 0;
 }
