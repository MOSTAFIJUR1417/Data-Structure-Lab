#include<iostream>
using namespace std;
int main()

{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=x-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

