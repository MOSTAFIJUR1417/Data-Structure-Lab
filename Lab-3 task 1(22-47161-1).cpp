#include<iostream>
using namespace std;

int main()
{
    int trans[15][15];
    int a,b;
    cout<<"How many row in the matrix: ";
    cin>>a;
    cout<<"How many column in the matrix: ";
    cin>>b;

    int arr[a][b];

    cout<<"Input the values: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<"Input the "<<i+1<<" of first row: ";
        for(int j=0;j<b;j++){
            cin>>arr[i][j];

        }
    }
    cout<<"The matrix: "<<endl;

        for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"The output in reverse order: "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){

            trans[j][i]=arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){

            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
}

}
