//Lab task2 Linear Search
#include <iostream>
using namespace std;
int search(int Arr[],int n,int p){
    int i;
    for (i=0;i<n;i++){
        if (Arr[i]==p)
            {
                return i;
            }
}
    return -1;
}
int main(void)
{
    int n,element,i;
    cout <<"Enter the size of an Array : ";
    cin >>n;
    int Arr[n];
    cout<< "Enter the elements of an Array : ";
    for (i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    cout <<"Enter the element which you want to search : ";
    cin >> element;
    int result = search(Arr,n,element);
    if(result == -1)
    {
       cout<<"Element is not present in Array.";
    }
    else
    {
       cout<<"Element is present at index : "<<result;
    }
    cout<<endl;
    return 0;
}

