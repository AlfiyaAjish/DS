#include<stdio.h>
int u[10]={10,20,30,40,50,60,70,80,90,100};
void display(int *arr);
int main()
 {
 int i;
  int univer[10]={1,1,1,1,1,1,1,1,1,1};
  int a[10]={1,0,1,0,0,1,0,0,1,1};
  int b[10]={1,0,0,1,1,1,0,1,1,0};
  int a_inters_b[10];
  int a_union_b[10];
  int a_diffr_b[10];
  int b_diffr_a[10];
  printf("\n universal set=");
  display(univer);
  printf("\n set A=");
  display(a);
  printf("\n set B=");
  display(b);
    
     printf("\na intersection b=");
     for(i=0;i<10;i++)
       {
       a_inters_b[i]=a[i]&&b[i];
       }
      display(a_inters_b);
     
     printf("\n A union B =");
     for(i=0;i<10;i++)
       {
       a_union_b[i]=a[i]||b[i];
       }
      display(a_union_b);
     
     printf(" \nA differencre B =");
     for(i=0;i<10;i++)
       { 
       if(a[i]>b[i])
       a_diffr_b[i]=a[i]-b[i];
       }
      display(a_diffr_b);
      
     printf("\nB differencre A =");
     for(i=0;i<10;i++)
       { 
       if(b[i]>a[i])
       b_diffr_a[i]=b[i]-a[i];
       }
      display(b_diffr_a);
}

void display( int *arr)
{
int *ar=arr,i;
 for(i=0;i<10;i++)
    {
      if(*ar==1)
      printf("%d\t",u[i]);
      ar++;
  }
  }
     
  
  
