#include<bits/stdc++.h>
using namespace std;
class Queue{
private:
    int rear,front;
    int arr[5];
public:
    Queue(){
        rear = -1;
        front = -1;
        for(int i = 0; i<5; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(rear == 4)
            return true;
        else
            return false;
    }

    void enqueue(int value){
        if(isFull())
            cout<<"Queue Overflow\n";
        else if(isEmpty()){
            rear = 0;
            front = 0;
            arr[rear] = value;
            cout<<"enqueue done\n";
        }
        else{
            rear++;
            arr[rear] = value;
            cout<<"enqueue done\n";
        }
    }

    void dequeue(){
        if(isEmpty())
            cout<<"Queue Underflow\n";
        else if(rear == front){
            rear = -1;
            front = -1;
            cout<<"dequeue done\n";
        }
        else{
            front++;
            cout<<"dequeue done\n";
        }
    }

    void display(){
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else{
            for(int i = front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    int showFront(){
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else
            return arr[front];
    }


};

int main()
{
    Queue p;
    p.enqueue(7);
    p.enqueue(6);
    p.enqueue(5);
    p.enqueue(4);
    p.enqueue(3);
    p.enqueue(2);
    p.enqueue(1);
    p.display();
    cout<<"Front element : "<<p.showFront()<<endl;
    p.dequeue();
    p.dequeue();
    p.display();
    cout<<"Front element : "<<p.showFront()<<endl;

}
