#include <iostream>
#include <vector>
using namespace std;
void slnx(vector<int> &arr,int &sln,int &vitrisln)
{
    sln = arr[0];
    vitrisln = 0;
    for ( int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > sln)
        {
            sln = arr[i];
            vitrisln = i;
        }
    }
}
void snnx(vector<int> &arr,int &snn,int &vitrisnn)
{
    snn = arr[0];
    vitrisnn = 0;
    for ( int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < snn)
        {
            snn = arr[i];
            vitrisnn = i;
        }
    }
}
void nhap(vector<int> &arr,int n)
{
    for ( int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n,sln,snn,vitrisln,vitrisnn;
    cin >> n;
    vector<int> arr(n);

    nhap(arr,n);

    slnx(arr,sln,vitrisln);
    snnx(arr,snn,vitrisnn);

    cout << sln << " " << vitrisln << endl;
    cout << snn << " " << vitrisnn << endl;

    return 0;
}