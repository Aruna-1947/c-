#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert()
{ 
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node))
if(temp==NULL)
     printf("Overflow");
 else if(front==NULL)
         rear=front=temp;
   else
         temp->next=front;
         front->prev=temp;
         front=temp;s

//#Insertion at Rear end : 	   
void insert_rear()
if(temp==NULL)
     printf("Overflow");
 else if(rear==NULL)
         front=rear=newNode;
     else
         newNode->prev=rear;
       rear->next=newNode;
       rear=newNode;
#Deletion from Front end :
	vod delete_frot()
	{
 if(front==NULL)
     printf("Underflow");
 else
    temp = front
     front = front->next
     IF(front == NULL)
         rear = NULL;
     else
         front->prev = NULL
    Deallocate space for temp

#Deletion from Rear end :
void 
 if(ront == NULL)
     printf("Underflow");
 else 
     temp = rear
     rear = rear->prev
     if(rear == NULL)
         front = NULL
     else
         rear->next = NULL
     Deallocate space for temp
