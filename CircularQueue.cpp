#include<bits/stdc++.h>
using namespace std;
#define MAX 5

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    Queue()
    {
        arr=new int[MAX];
        front = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if((rear+1)%MAX == front)
        {
            cout<<"Queue is full"<<endl;
        }
        else if(front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear]=data;
        }
        else
        {
            rear=(rear + 1)%MAX;
            arr[rear]= data;
        }
    }

    void dequeue()
    {
        if(front == -1 && rear == -1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front == rear)
        {
            cout<<"Dequeue: "<<arr[front]<<endl;
            front = rear = -1;
        }
        else
        {
            cout<<"Dequeue: "<<arr[front]<<endl;
            front = (front +1)%MAX;
        }
    }

    void display()
    {
         if(front == -1 && rear == -1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
                cout<<"List: ";
            int i=front;
            while(i!= rear)
            {
                cout<<arr[i]<<" ";
                i=(i+1) % MAX;
            }
            cout<<arr[rear];
            cout<<endl<<endl;
        }

    }
};

int main()
{
    Queue q;
    q.dequeue();
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(30);
    q.enqueue(35);
    q.display();
}
