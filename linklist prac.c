#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;
void firstNode(int data){
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=data;
    head->next=NULL;
}

void addFirst(int data){
    
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=NULL;

    ptr->next=head;
    head=ptr;
} 

void addNodeEnd(int data){
    struct Node *ptr;
    ptr=head;
    struct Node *temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}


void add_node_at_pos(int data,int pos)
{
    struct Node *ptr;
    ptr=head;
    struct Node *temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    int i=1;
    while(i!=pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}
void print()
{
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        if(ptr->next!=NULL){
            printf("->");
        }
        ptr=ptr->next;
    }
}

int main()
{
    firstNode(2);
    addNodeEnd(3);
    addNodeEnd(4);
    print();
    add_node_at_pos(50,2);
    addFirst(1);
    addFirst(0);
    printf("\n");
    print();
}