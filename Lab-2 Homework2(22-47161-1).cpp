#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Input the 10 elements of the array: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];

    }

    int a;
    int counter=0;
    cout<<"Which integer you want to check: ";
    cin>>a;
    for(int i=0;i<10;i++){

        if(arr[i]==a){
            counter++;
            continue;
        }
    }

    cout<<a<<" In the array is occuerd : "<<counter<<" times.";

}
