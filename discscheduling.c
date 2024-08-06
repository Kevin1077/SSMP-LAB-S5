#include<stdio.h>
#include<stdlib.h>
void main(){
  int ch=1,c;
  while(ch==1){
    printf("enter the choice\n 1)FCFS 2)SCAN 3)CSCAN 4)exit \n");
    scanf("%d",&c);
    switch(c)
   {
   case 1:{
   int n,head,distance,seaktime=0,i;
   printf("Enter the number of request:\n");
   scanf("%d",&n);
   printf("Enter the initial head position:\n");
   scanf("%d",&head);
   int a[n];
   printf("Enter the request:\n");
   for(i=1;i<=n;i++)
   {
      scanf("%d",&a[i]);
   }
   a[0]=head;
   for(i=0;i<n;i++)
   {
      distance=abs(a[i+1]-a[i]);
      printf("The head movement from %d to %d is %d\n",a[i],a[i+1],distance);
      seaktime+=distance;
   }
   printf("The average seaktime is %d\n",seaktime);
   break;
   }
   
   case 2:{
   int n,head,distance,seaktime=0,i,size,temp,j,dir;
   printf("Enter the number of request:\n");
   scanf("%d",&n);
   printf("Enter the initial head position:\n");
   scanf("%d",&head);
   printf("Enter the maximum size:\n");
   scanf("%d",&size);
   int a[n];
   printf("Enter the request:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
       {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
   printf("Enter the direction 1 for high and 0 for low:\n");
   scanf("%d",&dir);
   if(dir==1)
   {
      seaktime+=size-1-head;
      if(a[0]<head)
      {
        seaktime+=size-1-a[0];
      }
   }
   else
   {
     seaktime+=head;
     if(a[n-1]>head)
     {
       seaktime+=a[n-1];
     }
   }
   printf("The average seaktime = %d\n",seaktime);
   break;
   }
   case 3:{
   int n,head,distance,seaktime=0,i,size,temp,j,dir;
   printf("Enter the number of request:\n");
   scanf("%d",&n);
   printf("Enter the initial head position:\n");
   scanf("%d",&head);
   printf("Enter the maximum size:\n");
   scanf("%d",&size);
   int a[n];
   printf("Enter the request:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
       {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
   printf("Enter the direction 1 for high and 0 for low:\n");
   scanf("%d",&dir);
   int index=0;
   while(index<n&&head>=a[index])
   {
   index++;
   if(dir==1)
   {
     for(i=index;i<n;i++)
     {
       seaktime+=abs(a[i]-head);
       head=a[i];
     }
     seaktime+=abs(size-a[n-1]-1);
     seaktime+=size-1;
     head=0;
     for(i=0;i<index;i++)
     {
        seaktime+=abs(a[i]-head);
        head=a[i];
     }
   }
   
   else
   {
     for(i=index-1;i>=0;i--)
     {
        seaktime+=abs(a[i]-head);
         head=a[i];
     }
      seaktime+=abs(a[0]-0);
      seaktime+=size-1;
      head=size-1;
      for(i=n-1;i>=index;i--)
      {
        seaktime+=abs(a[i]-head);
        head=a[i];
      }
   }
  }
  printf("Average seaktime = %d\n",seaktime);
  break;
  }
  case 4:{
  exit(0);
  }
    }
   }
  }
