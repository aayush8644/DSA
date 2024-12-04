#include<stdio.h>
#define size 5
int linear_queue[size];
int rear=-1,front=-1;
 void enqueue(int);



int main()
{
    int choice,data;
    printf("\n Enter \n1 for enqueue \n2 for Dequeue \n3 for front \n4 for display \n5 for Exit ");
    scanf("%d", &choice);
    switch(choice)
    { 
        case 1:
        printf("\n Enter data ");
        scanf("%d", &data);
        enqueue(data);
        break;
    }
    return 0;
}
    void enqueue(int data)
    {
        if(rear==size-1)
        {
            printf("\n queue is already full");
            return;
            
        }
        else if(rear==-1 && front==size-1)
        {
            rear=rear+1;
            front=front+1;
        }
        else
        {
            rear=rear+1;
        }
       linear_queue[rear]=data;
       printf("\n%dis enqueued",data);
    }