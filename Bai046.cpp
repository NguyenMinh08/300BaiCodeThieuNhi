#include <iostream>
#include <vector>
using namespace std;
void nhapmang(vector<int>&mang)
{
    for ( int i = 0; i < mang.size();i++)
        cin >> mang[i];
}
bool timx(vector<int>nums,int target,int &vitri)
{
    for ( int i = 0; i < nums.size();i++)
        if (nums[i] == target)
        {
            vitri = i;
            return true;
        }
    return false;
}
int main()
{
    int nums,target,vitri;
    cin >> nums >> target;
    vector<int>mang(nums);
    nhapmang(mang);
    if (timx(mang,target,vitri))
        cout << "Yes"<<endl<<vitri;
    else cout << "No";
    return 0;
}
