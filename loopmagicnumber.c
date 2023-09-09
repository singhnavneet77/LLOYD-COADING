#include<stdio.h>
void main()
{
  int n,r,sum=0,s,m,a,b;
  printf("enter a number ");
  scanf("%d",&n);
  s=n;
  for( ;n!=0;n=n/10)
  {
    r=n%10;
    sum=sum+r;
  }a=sum;
  while(sum>0)
  {
  r=sum%10;
  m=m*10+r;
  sum=sum/10;
}b=m*a;
  if(b==s)
  {printf(" magic number");}
  else
{  printf(" not a magic number");}
  }
