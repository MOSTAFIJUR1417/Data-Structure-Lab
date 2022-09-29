#include<iostream>
using namespace std;
int main()
{
    int p,q;
    cout<<"Enter Size 0f Two Array: ";
    cin>>p>>q;
    int a[p];
    int b[q];
    cout<<"Enter Elements of First Array: ";
    for(int i=0;i<p;i++){
        cin>>a[i];
    }
    cout<<"Enter Elements of Second Array: ";
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    cout<<"Common element: ";
    for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            break;
        }
    }
  }

return 0;

}

