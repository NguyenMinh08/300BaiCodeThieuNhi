#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int> &mang) 
{
    for (int i = 0; i < mang.size(); i++) 
        cin >> mang[i];
}
int tong_vitri_chan(vector<int> &mang) 
{
    int result = 0;
    for ( int i = 0; i < mang.size() ; i+=2)
        result += mang[i];
    return result;
}
int main() {
    int n;
    cin >> n; 
    vector<int> mang(n); 
    nhapmang(mang);   
    int result = tong_vitri_chan(mang); 
    cout << result;
    return 0;
}
 
