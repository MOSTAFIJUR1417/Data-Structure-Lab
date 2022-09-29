#include<iostream>
using namespace std;
int main()
{
     int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }

    }
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<" ";
        }
    }
}

