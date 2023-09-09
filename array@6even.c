#include<stdio.h>
void main()
{
  int n,i;
  printf("enter the size of array");
  scanf("%d",&n);
  int arr[n];
  for(i=1;i<=n;i++)
    {  printf("enter the array");
  scanf("%d",&arr[i]);}
  for(i=1;i<=n;i++)
  {
    if(arr[i]%2==0)
    printf("even number is %d\n",arr[i]);
    else
    printf("odd number is %d\n",arr[i]);
  }
}
