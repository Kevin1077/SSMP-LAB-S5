#include<stdio.h>
#include<stdlib.h>
 void main()
 {
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
   }
   
   
   
   
   
   
   
