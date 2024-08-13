#include<stdio.h>
#include<stdlib.h>
void main()
{
   int n,r,i,j,k=0,c=0,exec,flag;
   printf("Enter the number of request:\n");
   scanf("%d",&n);
    printf("Enter the number of resource:\n");
   scanf("%d",&r);
   int avail[r],need[n][r],alloc[n][r],max[n][r],vis[n],a[n];
   printf("Enter the available:\n");
   for(i=0;i<r;i++)
   {
     scanf("%d",&avail[i]);
   }
   for(i=0;i<n;i++)
   {
   vis[i]=0;
     printf("Enter the allocation of p%d\n",i);
     for(j=0;j<r;j++)
     {
        scanf("%d",&alloc[i][j]);
     }
      printf("Enter the max of p%d\n",i);
     for(j=0;j<r;j++)
     {
        scanf("%d",&max[i][j]);
     }
     for(j=0;j<r;j++)
     {
       need[i][j]=max[i][j]-alloc[i][j];
     }
   }
   printf("Alloc\tmax\tneed\tavail\n");
   for(i=0;i<n;i++)
   {
     for(j=0;j<r;j++)
     {
        printf("%d ",alloc[i][j]);
     }
     printf("\t");
     for(j=0;j<r;j++)
     {
        printf("%d ",max[i][j]);
     }
     printf("\t");
     
     for(j=0;j<r;j++)
     {
        printf("%d ",need[i][j]);
     }
     printf("\t");
     if(i==0)
     {
       for(j=0;j<r;j++)
     {
        printf("%d ",avail[j]);
     }
     printf("\t");
     }
     printf("\n");
   }
   
   while(c<n)
   {
     flag=0;
     for(i=0;i<n;i++)
     {
       exec=0;
       for(j=0;j<r;j++)
       {
         if(need[i][j]<=avail[j])
         {
           exec++;
         }
       }
       if(exec==r&&vis[i]==0)
       {
          for(j=0;j<r;j++)
          {
            avail[j]=avail[j]+alloc[i][j];
          }
          flag++;
          c++;
          a[k++]=i;
          vis[i]=1;
       }
       
       
     }
     if(flag==0)
   {
     printf("No safe sequence\n");
     exit(0);
   }
     
   }
   printf("The safe sequence is \n");
   for(i=0;i<n;i++)
   {
     printf("p%d ",a[i]);
   }
   printf("\n");
   
}
