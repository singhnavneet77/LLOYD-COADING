#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("enter the number to check it is perfect or not ");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++)
{  if(n%i==0)
  sum=sum+i;
}
if(n==sum)
printf("number is perfect");
else
printf("number is not  perfect");
}
