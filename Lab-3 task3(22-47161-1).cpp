#include<iostream>
using namespace std;

struct Employee{

   string id;
   string dname;
   int sal;
   int jyear;
};
int main(){
int a=10;
Employee info[a];

for(int i=0;i<a;i++){
    cout<<"Info Number "<<i+1<<" Employee: "<<endl;
    cout<<"Enter the ID: ";
    cin>>info[i].id;
    cout<<"Enter the Dept Name: ";
    cin>>info[i].dname;
    cout<<"Enter the salary: "  ;
    cin>>info[i].sal;
    cout<<"Enter the joining year: ";
    cin>>info[i].jyear;

}

for(int i=0;i<a;i++){
    if(info[i].sal>20000 && info[i].jyear<2009){
    cout<<"Info Number "<<i+1<<" Employee: "<<endl;
    cout<<"Enter the ID: "<<info[i].id<<endl;

}
}
}

