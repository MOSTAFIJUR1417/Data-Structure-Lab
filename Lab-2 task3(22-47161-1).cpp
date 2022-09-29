#include<iostream>
using namespace std;
int main()
{
     int x,y;

     cout<<"How many elements are in the first array: ";
    cin>>x;
    int a1[x];
    cout<<"Input the elements of the first array: ";
    for(int i=0;i<x;i++)
    {
        cin>>a1[i];
    }
    cout<<"How many elements are in the second array: ";
    cin>>y;
    int a2[y];
        cout<<"Input the elements of the second array: ";
    for(int i=0;i<y;i++)
    {
        cin>>a2[i];
    }
    int i,j;
     bool temp=false;



   for( i=0;i<x;i++)
    {
        for( j=0;j<y;j++)
        {
            if(a1[i]==a2[j])
            {
                temp=true;
                break;
            }
            else if(a1[i]!=a2[j])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<a1[i]<<" ";
        }
   }

        for( i=0;i<y;i++)
        {
        for( j=0;j<x;j++)
        {
            if(a1[i]==a2[j])
            {
                temp=true;
                break;
            }
            else if(a2[i]!=a1[j])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<a2[i]<<" ";
        }
    }
}
