#include<stdio.h>
#define size 5
int linear_queue[size];
int rear=-1,front=-1;
 void enqueue(int);
 void dequeue();
 void front_element();
 void display();



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
        case 2:
        dequeue();
        break;
        case 3:
        front_element();
        break;
        case 4:
        
      display();
        break;
        case 5:
        printf(" coding is successfully");
        return 0;
        
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
    void dequeue()
    {
        if(rear==-1&&front==-1)
        {
            printf("\n queueis already empty");
            
        }
        else if(rear==front)
        {
            rear=-1;
            front=-1;
            
        }
        else
        {
            printf("\n %d is dequeued successfully ",linear_queue[front]);
            front=front+1;
        }
    }
    void front_element()
    {
        if(front==-1 &&rear==-1)
        {
            printf("\n queue is empty");
        }
        else
        {
            printf("display the front element on the queue is %d",linear_queue[front]);
        }
    }
    void display()
    {
        int i;
    {
        if(front==-1 && rear==-1)
        {
            printf("\n queue is empty");
        }
        else
        {
            for(i=front;i<=rear;i++)
            {
                printf("\n %d",linear_queue[i]);
            }
        }
        }}