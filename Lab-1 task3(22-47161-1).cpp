#include<iostream>
using namespace std;
void show(int x,int y)
{
     int p;
    cin>>p;
    int arr[p];
    for(int i=0;i<p ;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    for(int i=0;i<p;i++)
    {

        for(int j=x;j<=y;j++)
        {
        if(j%2!=0&& arr[i]==j)
        cout<<j<<" ";
        }
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    show(m,n);
}
