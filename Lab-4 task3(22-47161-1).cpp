//lab task3-binary Search
#include<iostream>
using namespace std;
int main(){
    int i,num,low,high,mid;
    int p=low;
    int q=high;
    int arr[10];
    cout<<"Enter 10 Elements is: ";
    for(i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter Element to be Search: ";
    cin>>num;
    p = 0;
    q = 9;
    mid =(p+q)/2;
    while(p<=q)
    {
        if(arr[mid]<num)
            p= mid+1;
        else if(arr[mid]==num)
        {
            cout<<endl;
            cout<<"The number "<<num<<" found at Position: "<<mid+1;
            cout<<endl;
            break;
        }
        else
            q = mid-1;
            mid = (p+q)/2;
    }
    if(p>q){
        cout<<endl;
        cout<<"The number "<<num<<" is not found in given Array ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
