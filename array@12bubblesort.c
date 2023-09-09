//bubble short
#include<stdio.h>
void main()
{
   int n,i,j,t;
printf("Enter the size of array");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
  {printf("Enter an element");
  scanf("%d",&arr[i]);}
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
  {
    if(arr[j]>arr[j+1])
    {
    t=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=t;
    }
    }
    }
printf("The sorted array is\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}
