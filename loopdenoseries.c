#include<stdio.h>
void main()
{
int n,s=1,i;
printf("enter a number of term");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
  if(i%2==0)
  s=s-1/i;
  else
  s=s+1/i;
}
printf("sum is %d",s);
}
