//function declaration
#include<stdio.h>
#define size 5
int circular_queue[size];
int rear=-1,front=-1;
 void enqueue(int);
 void dequeue();
 void display();
void empty();

//driver code
int main()
{
    int choice,data;
    while(1){
    printf("\n Enter \n1 for enqueue \n2 for Dequeue \n3 for display \n4for Exit ");
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
        
      display();
        break;
        case 4:
        printf(" coding is successfully");
        return 0;
        case 5:
        printf("bye");
        return 0;
        case 6:
        empty();
        break;
    }
    }

    return 0;
}
//function defenation
    void enqueue(int data)
    {
        if((rear+1)%size==front)
        {
            printf("\n queue is already full");
            return;
            
        }
        else if(rear==-1 && front==-1)
        {
            rear=(rear+1)%size;
            front=(front+1)%size;
        }
        else
        {
            rear=(rear+1)%size;
        }
       circular_queue[rear]=data;
    
       printf("\n %d is enqueued",data);
    }
    void dequeue()
    {
        if(rear==-1&&front==-1)
        {
            printf("\n queueis already empty");
            
        }
        else if(rear==front)
        {
            printf("\n%d is dequeued successfully",circular_queue[front]);
        rear=-1;
        front=-1;
        }
    
    else
    {
        printf("\n%d is dequeued successfully",circular_queue[front]);
        front=(front+1)%size;
    }}
    
    void display()
    {
        int i;
        if(front=+-1 && rear==-1)
    {
            printf("\n queue is empty");
        }
        else
        {
            for(i=front;i<=rear;(i+1)%size)
            {
                printf("\n %d",circular_queue[i]);
            }
        }
        }
         void empty()
            {
                if(rear==-1 && front==-1)
                {
                    printf("\n queue is empty done");
                }
                else 
                {
                printf("\n queue is not empty");
                }}