//Selaction short;
#include<stdio.h>
void main()
{
  int n,i,j,c,min;
  printf("enter the size of array");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {printf("Enter an elment");
   scanf("%d",&arr[i]);}
   for(i=0;i<n;i++)
   {
     min=i;
     for(j=i+1;j<n;j++)
    { if(arr[min]>arr[j])
    min=j;
    }
    c=arr[i];
    arr[i]=arr[min];
    arr[min]=c;
   }
   printf("The sorted element is\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}
