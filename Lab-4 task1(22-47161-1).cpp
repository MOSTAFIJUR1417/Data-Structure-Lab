//BubbleSort
#include<iostream>
using namespace std;
void bubbleSort(int p[],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(p[j]>p[j+1]){
            int temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }
}
}

int main(){
int p;
cout<<"Enter the size of an Array : ";
cin>>p;
int a[p];

for(int i=0;i<p;i++){
    cin>>a[i];
}

cout<<"Unsorted array: ";
for(int i=0;i<p;i++){
    cout<<a[i]<<" ";
}
bubbleSort(a,p);
cout<<"Sorted array: ";
for(int i=0;i<p;i++){
    cout<<a[i]<<" ";
}

}
