#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

//declare globally
struct Node *head=NULL;


void FirstNode(int data)
{
   // head=(struct Node*)malloc(sizeof(struct Node));
   head=new (Node);
    head->data=data;
    head->next=NULL;
}
void addNodeEnd(int data)
{
    struct Node *temp=NULL;
    //temp=(struct Node*)malloc(sizeof(struct Node));
    temp=new (Node);
    temp->data=data;
    temp->next=NULL;
    struct Node *ptr=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}

void printNode()
{
    struct Node *ptr=NULL;
    ptr=head;
    int sum=0;
    cout<<"Linked_List: ";
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        if(ptr->next!=NULL){
            cout<<",";
        }
        sum+=(ptr->data * ptr->data);
        ptr=ptr->next;
    }
    cout<<endl;
    cout<<"Sum of Square of the Linked_List: "<<sum;
    cout<<endl;
}


int main()
{
    FirstNode(5);
    addNodeEnd(7);
    addNodeEnd(9);
    addNodeEnd(11);
    addNodeEnd(13);
    printNode();

}
