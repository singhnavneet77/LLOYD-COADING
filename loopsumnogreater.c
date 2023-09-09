#include<stdio.h>
void main()
{
  int n,i,max,sum=0;
  printf("enter a  number");
  scanf("%d",&n);
  max=n;
  sum=sum*n;

  for(i=1;i<=n;i++)
{
  printf("enter a  number");
  scanf("%d",&n);
  sum=sum+n;
  if(max<n)
  max=n;
}
printf("largest no is %d",max);
printf("sum is %d",sum);
}
