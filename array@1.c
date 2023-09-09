#include<stdio.h>
void main()
{
  int arr[5],sum=0,n,i;
  float avg;
  printf("enter the size ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("Enter an element ");
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
   }
   avg=(float)sum/n;
   printf("%f\n",avg );
}
