#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    //array input niyeci
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //then array gula print koreci
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    fill(arr, &arr[n], 0);
//fill function ar use kora, zero theke oi value projnto jei value ta dibo, first holo array name then array name and size, ar por jei value bosate cacci oi value
    //tarpor abar array ta print koreci dekhci value ta thik ace kina
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
