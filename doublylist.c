#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next; 
    struct node *pre;  
};  
struct node *head;  
  
void beginsert ();   
void lastinsert ();  
void posinsert();  
void begin_delete();  
void last_delete();  
void pos_delete();  
void display(); 
void displayreverse(); 
void search();  
int main ()  
{  
    int choice =0;  
    while(choice != 10)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at specific position\n4.Delete from Beginning\n5.Delete from last\n6.Delete at specified position\n7.Search for an element\n8.Show\n9.display in reverse order/n10.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            posinsert();       
            break;  
            case 4:  
            begin_delete();       
            break;  
            case 5:  
            last_delete();        
            break;  
            case 6:  
            pos_delete();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();         
            break;  
            case 9:  
            displayreverse();        
            break;
            case 10:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }
    return 0;  
}  
void beginsert()  
{  
	int data;
	node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node*));
	printf("enter the value to be inserted");
	scanf("%d",&data);
	ptr->data=data;
	
	if(head==NULL)
	{ 
		ptr->next=NULL;
		ptr->pre=NULL;
		head=ptr;
	}
	else
	{
		ptr->next=head;
		ptr->pre=NULL;
		head=ptr;
	}
}

void lastinsert()
{
	struct node *ptr,*temp;
	int data;
	ptr=(struct node*)malloc(sizeof(node*));
	printf("enter the value to be inserted");
	scanf("%d",&data);
	ptr->data=data;
	
	if(head==NULL)
	{ 
		ptr->next=NULL;
		ptr->pre=NULL;
		head=ptr;
		printf("\nnode inserted successfully\n");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
		  temp=temp->next;
		}
		temp->next=ptr;
		ptr->pre=temp;
		ptr->next=NULL;
		printf("\nnode inserted successfully\n");
	}	
}
void posinsert()
{
	struct node *ptr,*temp;
	int data,pos,i;
	ptr=(struct node*)malloc(sizeof(struct node*));
	printf("enter the value to be inserted");
	scanf("%d",&data);
	ptr->data=data;
	printf("\nenter the position to be inserted\n");
	scanf("%d",&pos);
	temp=head;
	for(i=1;i<pos-1;i++)
	 
	temp=temp->next;
	if(temp==NULL)
	{
	printf("insertion is not possible");
	return;
	}
	ptr->next=temp->next;
	temp->next=ptr;
	ptr->pre=temp;
	printf("\nnode inserted success fully\n");
	}
void begin_delete()
{
struct node *temp;
if (head==NULL)
{ 
printf("\n no elements for printing");
}
else
{ 
temp=head;
head=temp->next;
head->pre=NULL;
free(temp);
}
}
void last_delete()
{
	struct node *temp,*ptr;
	if(head==NULL)
	{
	printf("\n no elements for printing");
	}
	else if(head->next==NULL)
	{
	temp=head;
	free(temp);
	}
	else
	{
	temp=head;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->pre->next=NULL;
	free(temp);
	}
	}
void pos_delete()
{
struct node *temp,*ptr;
int pos,i;
printf("\neneter the position to be insert\n");
scanf("%d",&pos);
temp=head;
if(temp==NULL)
{
printf("deletion not possible");
return;
}
else if(pos==1)
{
temp=head;
head=temp->next;
head->pre=NULL;
free(temp);
}
else
{
for(i=1;i<pos-1;i++)
temp=temp->next;
if (temp->next==NULL)
{
printf("\ndeletion not possible");
return;
}
else if(temp-> next -> next == NULL)  
    {  
        temp->next = NULL;  
        printf("last node is deleted");
    }  
    else  
    {   
        ptr=temp->next;
	temp->next=ptr->next;
	ptr->next->pre=temp;
	free(ptr);
;  
        printf("\nnode deleted\n");  
    }     
/*ptr=temp->next;
ptr->pre=temp->pre;
temp->pre->next=temp->next;
free(temp);
ptr=temp->next;
temp->next=ptr->next;
ptr->next->pre=temp;
free(ptr);*/

}
}
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}   	

void displayreverse()
 {
struct node *ptr;
ptr=head;
if(ptr == NULL)
{
printf("\n Sorry there are no items in the list");
}
else
{
while(ptr->next != NULL) {
ptr = ptr->next;
}
printf("Elements in the Reverse Direction ");
while(ptr!= NULL) {
printf("\n%d\n ",ptr->data);
ptr=ptr->pre;
}
printf("\n");
}
}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
