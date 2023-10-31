#include <stdio.h>  
int max=6;  
int q[6];  
int front=-1;  
int rear=-1; 
int i;
void insert();
void delet();
void display();
void search();
int main()  
{  
    int choice=1,x;   
      
    while(choice<6 && choice!=0) 
    {  
    printf("\n 1: Insert an element");  
    printf("\n2: Delete an element");  
    printf("\n3: Display the element");  
     printf("\n4: search the element");  
    printf("\n5:exit");  
    printf("\nEnter your choice");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
        insert();  
        break;  
        case 2:  
        delet();  
        break;  
        case 3:  
        display();
        break;  
        case 4: 
        search();
        break;
        case 5:  
        return(0); 
        default:
        printf("\n invalid choice");
  
    }}  
    return 0;  
}  
void insert()
{
		int item;
		if((rear+1)%max==front)
			printf("queue overflow\n");
		else
		{
			printf("enter the item=");
		         scanf("%d",&item);
			if(rear==-1&&front==-1)
			{
				rear=0;
				front=0;
			}
			else
			{
			    rear=(rear+1)%max;
			}
			 q[rear]=item;	
			 printf("%d is inserted\n",item);
		}
	   
}
void delet()
{  
if((front==-1) && (rear==-1))
{
printf("q is underflow");
}
else if(front==rear)
{
printf("the deleted element is %d",q[front]);
front=-1;
rear=-1;
}
else
{
printf("the deleted element is %d",q[front]);
front=(front+1)%max;
}
}
void display()
{
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
	if(front==0)
	{
	for(i=front;i<=rear;i++)
	{
	printf("\n%d",q[i]);	
	}
	for(i=rear+1;i<max;i++)
	{
	printf("\n-");	
	}
	}
	if(front>rear)
	{
	for(i=0;i<=rear;i++)
	{
	printf("\n%d",q[i]);	
	}
	for(i=rear+1;i<front;i++)
	{
		printf("\n-");	
	}
		for(i=front;i<max;i++)
		{
			printf("\n%d",q[i]);	
		}
	}
	if(rear>=front && front!=0)
	{
	  for(i=0;i<front;i++)
		{
			printf("\n-");	
		}
	for(i=front;i<=rear;i++)
		{
		printf("\n%d",q[i]);	
		}
		for(i=rear+1;i<max;i++)
		{
			printf("\n-");	
		}
	}
}
		
}
void search()
{
if((front==-1) && (rear==-1))
{
printf("q is underflow");
}
else
{
   int item,a;
   printf("enetr the item to be searched");
   scanf("%d",&item);
   if(front==0)
   {
    for(i=front;i<=rear;i++)
	{
	if(q[i]==item)
	{
	a=i;
	break;
	}
	}
   }
   
   if(front!=0 && rear>=front)
  { 
    for(i=front;i<=rear;i++)
       {
        if(q[i]==item)
	{
	a=i;
	break;
	}
       }
 }
 
 if(front>rear)
  {
   for(i=0;i<=rear;i++)
   {
   if(q[i]==item)
	{
	a=i;
	break;
	}
   }
    for(i=front;i<=max-1;i++)
   {
   if(q[i]==item)
	{
	a=i;
	break;
	}
   }
   }
   if(a==-1)
     printf("%d is not found\n",item);
   else
     printf("%d is found at index:%d\n",item,a);
 }
}
	



