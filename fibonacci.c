/* fibonacci series write in file*/
#include<stdio.h>
void main()
{
  int term,f=0,s=1,i,t;
  printf("enter the term of number ");
  scanf("%d",&term);
  printf("%d %d ",f,s);
  for(i=0;i!=term-2;i++)
  {
     t=f+s;
  printf("%d ",t);
  f=s;s=t;
}
}
