#include<stdio.h>
#include<stdlib.h>
int stack[20],visited[20],n,i,j,adj[20][20],top=0,a,item;
void push (int a)
{
top++;
stack[top]=a;
}
int pop()
{
a=stack[top];
top--;
return a;
}
int main()
{
 printf("enter the no of verteces");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   visited[i]=0;
   
 printf("\nenter the adjacency matrix\n");
 for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
     {
       scanf("%d",&adj[i][j]);
     }
   }
 printf("\nspanning tre edges are\n");
 push(1);
 for(i=1;i<=n;i++)
 {
  item=pop();
  printf("%d--->",item);
  visited[item]=1;
  for(j=i+1;j<=n;j++)
  {
   if(adj[item][j]==1 && visited[j]==0)
   {
     visited[j]=1;
     push(j);
   }
  }
  }
 return 0;
}
/*enter the no of verteces5

enter the adjacency matrix
0 1 1 0 0 
1 0 0 1 1
1 0 0 1 0
0 1 1 0 0
0 1 0 0 0

spanning tre edges are
1--->3--->4--->2--->5--->*/
