#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
int data;
struct node*next;
};

struct node*createnode(int new_data )
{
struct node*new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=new_data;
new_node->next=NULL;
return new_node;
}

struct node*insertATFront(struct node*head,int new_data )
{
struct node*new_node=createnode(new_data);
new_node->next=head;
return new_node;
}

void printlist(struct node*head)
{

struct node*curr=head;
while(curr!=NULL)
{
printf("%d",curr->data);
curr=curr->next;
}
printf("\n");
}

void main()
{
struct node*head=createnode(2);
head->next=createnode(3);
head->next->next=createnode(4);
head->next->next->next=createnode(5);

printf("original linked list : ");
printlist(head);

printf("after inserting nodes at the front: ");
int data=1;
head=insertATFront(head,data);
printlist(head);

getch();
}












