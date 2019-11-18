#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int front=-1;
int rear=-1;

void enq()
{
  int num;
  if(rear==MAX-1)
    {
      printf("queue is full\n");
      }
  else if(rear==-1)
    {
      printf("enter the number to be inserted\n");
      scanf("%d",&num);
      rear++;
      front++;
      arr[rear]=num;
    }
  else
    {
      printf("enter the number to be inserted\n");
      scanf("%d",&num);
      rear++;
      arr[rear]=num;
    }
  
}

void deq()
{
  if(rear==-1)
    printf("queue empty\n");
  else if(front==rear)
    {
      front=rear=-1;
    }
  else
    {
      front++;
    }
}
void disp()
{
  if(rear==-1)
    {
      printf("queue empty");
    }
  else if(front<=rear)
    {
      for(int i=front;i<=rear;i++)
	{
	  printf("%d\n",arr[i]);
	  
	}
    }
}

int main()
{
  int n;
   printf("***queue***\n");
  while(1)
    {
     
      printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nchoose an option:");
      scanf("%d",&n);
      switch(n)
	{
	case 1:
	  enq();
	  break;
	case 2:
	  deq();
	  break;
	case 3:
	  disp();
	  break;
	case 4:
	  exit(0);
	  break;
	default:
	  printf("invalid choice");
	}
    }

}
