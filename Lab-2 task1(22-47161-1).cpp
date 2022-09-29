#include<iostream>
using namespace std;
int main()
{
    int a1[60], a2[60], arrMerge[120];
	int s1, s2,i;
    cout<<"Enter the Size for First Array: ";
    cin>>s1;
    cout<<"Enter Elements for First Array: ";
    for( i=0; i<s1; i++)
    {
        cin>>a1[i];
        arrMerge[i] = a1[i];
    }
    int k;
     k = i;
    cout<<"Enter the Size of Second Array: ";
    cin>>s2;
    cout<<"Enter Elements of Second Array: ";
    for(int i=0; i<s2; i++)
    {
        cin>>a2[i];
        arrMerge[k] = a2[i];
        k++;
    }
    cout<<"The New Array in merge order: ";
    for(i=k-1; i>=0; i--)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}
