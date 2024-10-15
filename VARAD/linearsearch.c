//binary search
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,mid,low,high,se,n,arr[100];
 clrscr();
 printf("\n Enter array size:");
 scanf("%d",&n);
 printf("\n Enter a array elemnt in sorting way:");
  for (i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
   }
   printf("\n enter element which cam be searched:");
   scanf("%d",&se);
   low=0;
   high=n-1;
   mid=(low+high)/2;
   while(low<=high)
   {
    if(arr[mid]==se)
    {
     printf("elment is preesnet at %d",mid+1);
     break;
     }
     else if(arr[mid]<se)
     {
       low=mid+1;
       }
       else
       {
       high=mid-1;
       }
       mid=(low+high)/2;

       if(low>high)
       {
	 printf("elments is not present:");
	 }
      }
      getch();
      }