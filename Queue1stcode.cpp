#include<bits/stdc++.h>
using namespace std;
#define MAX 5


int arr[MAX];
int front= -1;
int rear= -1;

void enqueue(int data)
{
    if((rear+1) % MAX==front)
    {
        cout<<"OverFlow"<<endl;
    }

    else if(front == -1 && rear == -1)
    {
        front=rear=0;
        arr[rear]=data;
    }
    else{
        rear=(rear+1) % MAX;
        arr[rear]=data;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"UnderFlow"<<endl;
    }
    else if(front==rear)
    {
        cout<<"Dequeue : "<<arr[front]<<endl;
        front=rear=-1;
    }
    else
    {
        cout<<"Dequeue : "<<arr[front]<<endl;
        front=(front+1)%MAX;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else{
        while(i!=rear)
        {
            cout<<arr[i]<<" ";
            i=(i+1) % MAX;
        }
        cout<<arr[rear];
        cout<<endl;
    }
}

int main()
{
    dequeue();
    enqueue(5);
    enqueue(10);
    enqueue(15);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(20);
    enqueue(25);
    enqueue(30);
    enqueue(35);
    enqueue(40);
    display();
}