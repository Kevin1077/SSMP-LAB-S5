#include<stdio.h>
#include<stdlib.h>
 void main()
 {
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
      //printf("The head movement from %d to %d is %d\n",a[i],a[i+1],distance);
      seaktime+=distance;
   }
   printf("The average seaktime is %d\n",seaktime);
 }
