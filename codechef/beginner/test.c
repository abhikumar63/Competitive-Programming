#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL;
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("element is: %d\n",p->data);
        p=p->next;
    }
}

void insert(struct node *p,int index,int data)
{
    struct node *t;
    t=(struct node *)malloc(sizeof (struct node));
    t->data=data;
    if(index==0)
    {
        t->next=head;
        head=t;
    }
    else
    {
       for(int i=0;i<index-1;i++)
        p=p->next;
       t->next=p->next;
       p->next=t;
    }
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof (struct node));
    third=(struct node *)malloc(sizeof (struct node));
    fourth=(struct node *)malloc(sizeof (struct node));

    head=first;
    first->data=3;
    first->next=second;
    second->data=4;
    second->next=third;
    third->data=20;
    third->next=fourth;
    fourth->data=8;
    fourth->next=NULL;

    insert(head,0,1232);
    display(head);

    return 0;
}