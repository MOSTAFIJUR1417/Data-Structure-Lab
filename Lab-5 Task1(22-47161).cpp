#include<iostream>
using namespace std;

int stack[15];
int top = -1;

bool isEmpty()
{
    if(top == -1){
        return true;
        cout<<"Stack is Empty"<<endl;
        }
    else{
        return false;
        cout<<"Stack is not Empty"<<endl;
        }
}

bool isFull()
{
    if(top == 14){
        return true;
        cout<<"Stack is full"<<endl;
        }
    else{
        return false;
        cout<<"Stack is not Full"<<endl;
    }
}

void push(int value)
{
    if(isFull())
        cout<<"Stack Overflow"<<endl;
    else{
        top++;
        stack[top] = value;
        cout<<"Value Pushed"<<endl;
    }
}

void pop()
{
    if(isEmpty())
        cout<<"Stack underflow"<<endl;
    else{
        top--;
        cout<<"Value Poped"<<endl;
    }
}

void display()
{
    if(isEmpty())
        cout<<"Stack is Empty"<<endl;
    else{
        cout<<"Stack : ";
        for(int i = top; i >= 0; i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

void showTop()
{
    if(isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Top Element : "<<stack[top];
}
int main()
{
    push(7);
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    display();
    showTop();
    cout<<endl;
    pop();
    pop();
    display();
    showTop();
}
