
#include<bits/stdc++.h>
using namespace std;
#define MAX 2

class Queue
{
    int *arr;
    int front;
    int rear;

public:

    Queue()
    {
        arr=new int[MAX];
        front = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if((rear+1)%MAX==front)
        {
            cout<<"OverFlow"<<endl;
        }
        else if(front == -1 && rear == -1)
        {
            front =rear=0;
            arr[rear]=data;
        }
        else
        {
            rear=(rear+1)%MAX;
            arr[rear]=data;
        }
    }


    void dequeue()
    {
        if(front == -1 && rear == -1)
        {
            cout<<"UnderFlow"<<endl;
        }
        else if(front == rear)
        {
            //cout<<"Front element dequeued : "<<arr[front]<<endl;
            front = rear =-1;
        }
        else
        {
            //cout<<"Front element dequeued : "<<arr[front]<<endl;
            front=(front+1)%MAX;
        }
    }

    void display()
    {
        if(front == -1 && rear == -1)
        {
            cout<<"UnderFlow"<<endl;
        }

        else
        {
            cout<<"Current Circular Queue : ";
            int i=front;
            while(i!=rear)
            {
                cout<<arr[i]<<" ";
                i=(i+1)%MAX;
            }
            cout<<arr[rear];
            cout<<endl;
        }

    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.enqueue(3);
    q.dequeue();
    q.enqueue(4);
    q.display();
}
