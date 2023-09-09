#include<stdio.h>
void main()
{
  int n,i,c=0,j;
  printf("enter a size of array ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("enter an array");
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    c=0;
  for(j=2;j<arr[i];j++)
  {
  if(arr[i]%j==0)
  {
    c=1;
    break;
  }
  }
  if(c==0)
  {
    printf("prime is %d\n",arr[i]);
  }
}}
