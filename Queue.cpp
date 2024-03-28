#include<bits/stdc++.h>
using namespace std;
#define MAX 5

class Queue{
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
        if(rear == MAX-1)
        {
            cout<<"Queue is full"<<endl;
        }
        else if(front == -1 && rear == -1)
        {
            front=rear=0;
            arr[rear]=data;
        }
        else
        {
            rear=rear + 1;
            arr[rear]=data;
        }
    }

    void dequeue()
    {
        if(front == -1 && rear == -1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front ==  rear)
        {
            cout<<"Dequeue: "<<arr[front]<<endl;
            front = rear=-1;
        }
        else
        {
            cout<<"Dequeue: "<<arr[front]<<endl;
            front = front + 1;
        }
    }

    void display()
    {
        if(front == -1 && rear == -1)
        {
            cout<<"Queue is empty"<<endl;
        }

        else
        {
            cout<<"List of Queue: ";
            for(int i=front;i<rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<arr[rear];
            cout<<endl<<endl;
        }

    }
};

int main ()
{
    cout<<"\t\tWelcome to our Queue"<<endl<<endl;
    Queue q;
    q.dequeue();
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.display();


    cout<<"Thank You for using this code"<<endl<<endl;

}
