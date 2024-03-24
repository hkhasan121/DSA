#include<bits/stdc++.h>
using namespace std;
#define MAX 5

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
        if(rear == MAX - 1)
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
            rear++;
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
            cout<<"Front element dequeued : "<<arr[front]<<endl;
            front = rear =-1;
        }
        else
        {
            cout<<"Front element dequeued : "<<arr[front]<<endl;
            front++;
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
            cout<<"Current Queue : ";
            for(int i=front; i<rear; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<arr[rear];
            cout<<endl;
        }

    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.dequeue();
    q.display();
}
