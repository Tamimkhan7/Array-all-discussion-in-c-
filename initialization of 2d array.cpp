#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;//array size first outer size second inner size
    int arr[a][b];//array
    for(int i=0; i<a; i++)//outer loop
    {
        for(int j=0; j<b; j++)//inner loop
        {
            cin>>arr[i][j];//array input
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
