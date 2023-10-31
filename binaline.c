#include<stdio.h>
int i,n,mid,a[10],item,high,low;
void binary();
void linear();
void binary()
{
int flag=0;
 printf("enter element for search\n");
 scanf("%d",&item);
 low=0;
 high=n;
 while(low<=high)
{
mid=(low+high)/2;
if(item==a[mid])
 {
 flag=1;
 printf("%d is found at %d position\n",item,mid);
 return;
 }
else if(item>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(flag==0)
{
printf("%d is not found\n",item);
}
}
void linear()
{ 
int l=0;
printf("enter element for search\n");
 scanf("%d",&item);
 for(i=0;i<=n-1;i++)
 {
 if(a[i]==item)
 {
 l=1;
 break;
 }
 }
 if(l==0)
  printf("item not found");
 else
  printf("item found at location %d",l+1); 
} 
int main()  
{  
printf("enter size\n");
 scanf("%d",&n);
 printf("enter the elements\n");
 for(i=0;i<=n-1;i++)
 {
  scanf("%d",&a[i]);
 }
    int choice=1,x;   
      
    while(choice<6 && choice!=0) 
    {  
    printf("\n 1:binary search");  
    printf("\n2: linear search");  
    printf("\n3:exit");  
    printf("\nEnter your choice");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
        binary();  
        break;  
        case 2:  
        linear();  
        break;  
        case 3:  
        return(0);
        break;
     }
    }
    return 0;
