#include<stdio.h>
void main()
{
  int arr[5],i;
  for(i=0;i<5;i++)
  { printf("enter a number ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<5;i++)
  {
    printf("%d\n",arr[i]*2);
}
}
