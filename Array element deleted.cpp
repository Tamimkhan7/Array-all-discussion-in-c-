#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n],i,pos,c=0;
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>pos;
    for(i=pos-1; i<n; i++)
    {
        arr[i]= arr[i+1];
    }
    n--;
    for (i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;


    return 0;
}
