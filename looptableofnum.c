#include<stdio.h>
void main()
{
  int n,i,f;
  printf( "enter a number ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
  f=n*i;
  printf("%d*%d=%d\n",n,i,f);
  }}
