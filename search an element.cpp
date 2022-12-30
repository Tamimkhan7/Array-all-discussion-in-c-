#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n],c=0,x,i,pos;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(i=1; i<=n; i++)
    {
        if(arr[i]==x)
        {
            c++;
            pos = i;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Not found in the element"<<endl;
    }
    else
    {
        cout<<"Found the element"<<" "<<pos<<endl;
    }


    return 0;
}
